var ctx = document.getElementById("jogo").getContext("2d");
ctx.canvas.height = $("body").height() / 2;
ctx.canvas.width = $("body").width() * 3 / 4;


// Todas as variaveis do script criadas


//Aqui só constantes
const delay = 30;
const soma = 50;
const pontosDiminui = 10;
const MAX_RANK = 10;

//Teclas keycode
const up = 38;
const down = 40;
const left = 37;
const right = 39;
const esc = 27;



// Variavel do ranking temporaria pra quando forem chamar pelo localstorage
var ranking;





// pontos atuais e da fase
var pontos = 0;
var pontosF = 0;


//Corrigir a proporcao do print
var resizeX = Math.ceil(ctx.canvas.width / 40);
var resizeY = Math.ceil(ctx.canvas.height / 10);


//Arquivos temporarios e originais pra reiniciar o nivel (e o nivel que está sendo jogado) (São arrays, a posicao atual é a "nivel")
var files;
var nivel = 0;
var filesOriginal;

//Nome do jogador e se é um novo jogo ou está continuando
var nome;
var novo = true;

var player;


// ID do loop do update e intervalo pra diminuir pontuacao
var currentUpdate;
var intervaloDiminui;


// Vetor de moedas (é uma matriz)
var moedas = [];


//Todas entidades que se mexem
var entidades = [];

// Pra continuar após já ter iniciado
var podeContinuar;


var morreu = false;



// Reinicia todas as variaveis que o jogo usa quando recebe um arquivo novo (o onchange do input de arquivos chama essa funcao)
function arquivo(inputFiles) {

    if (novo) {
        novo = false;
        nivel = 0;
        player = undefined;
        nivel = 0;
    }





    clearInterval(currentUpdate);


    if (typeof window.FileReader !== 'function')
        throw ("API de arquivo nao suportada");

    if (inputFiles) {
        $("#jogo").css("visibility", "visible");
        document.getElementById("mortes").innerHTML = 0;
        files = {};
        filesOriginal = [];
        var count = 0;
        for (var f in inputFiles) {
            if (typeof inputFiles[f] !== 'object') continue;
            var reader = new FileReader();
            reader.readAsText(inputFiles[f]);
            var localC = count + 0;
            count++;
            reader.onload = function(evt) {

                filesOriginal[localC] = procFile(evt.target.result);
            }
        }
        voltar(); // volta pro menu depois de  ler o arquivo
        enable(); // Habilita o botao de jogar
    } else {
        console.log("Problema no arquivo")
    }
}


// Para outros sons antes de tocar a musica
function stop(el) {
    var sounds = document.getElementsByTagName('audio');
    for (i = 0; i < sounds.length; i++)
        if (sounds[i].id !== el.id) sounds[i].pause();



}

// Se ele encostar em algo do tipo 'C', chama a funcao ganhou
function ganhou() {

    //Toca a musica da vitória
    document.getElementById('fase').play();


    // fecha intervalos do jogo
    clearInterval(currentUpdate);
    clearInterval(intervaloDiminui);

    //Soma os pontos da fase
    pontos += pontosF;

    // Faz o parse por que o localStorage só guarda string
    var rank = JSON.parse(localStorage.getItem("ranking"));
    ranking = rank;
    rank = rank ? rank : {};
    rank[nome] = pontos;
    localStorage.setItem("ranking", JSON.stringify(rank));

    // Pra ver se terminaram as fases
    if (filesOriginal.length > nivel + 1) {
        nivel++;
        play(nivel);
    } else {
        alert("Terminou todos os niveis\nPontuacao: " + pontos);
        $("#jogo").css("visibility", "hidden");
        podeContinuar = false;
        changeState("menu");
    }

}



// Faz o processamento do arquivo pra uma matriz
function procFile(file) {
    var txt = file;


    txt = txt.split("\r\n");

    var count = 0;
    file = []
    for (var row in txt) {
        file[count] = txt[row].split("");
        count++;
    }


    return file;

}




// Inicia as variáveis e os loops de update do jogo e diminuir pontuacao por tempo
function play(nivel) {


    // Bind das funcoes de evento de teclas
    document.onkeydown = checkKey;
    document.onkeyup = checkKeyUp;



    // Parse do ranking pra ver se esse jogador já jogou alguma vez
    var rank = JSON.parse(localStorage.getItem("ranking"));
    ranking = rank;
    rank = rank ? rank : {};

    if (rank[nome]) {
        pontos = rank[nome];
    } else {
        rank[nome] = 0;
        pontos = 0;
    }

    localStorage.setItem("ranking", JSON.stringify(rank));


    //Inicia a matriz do jogo a partir da matriz original
    files[nivel] = [];


    for (var x in filesOriginal[nivel]) {
        if (files[nivel][x] == undefined) files[nivel][x] = [];
        for (var y in filesOriginal[nivel][x]) {
            files[nivel][x][y] = filesOriginal[nivel][x][y].slice(0);
        }

    }

    // Pra poder clicar em continuar no menu
    podeContinuar = true;

    // Cria as entidades pra se mexerem do jogo
    createEntities(nivel);

    // Fecha os intervalos pra reiniciar depois
    clearInterval(currentUpdate);
    clearInterval(intervaloDiminui);


    // Se o play é porque iniciou um nivel novo, morreu é false, então começa a pontuacao da fase me 1000
    if (!morreu) {
        pontosF = 1000;

    } else // Senao a pontuacao segue igual antes de morrer
        morreu = false;

    // Atualiza os pontos nas spans
    $("#pont-f").html(pontosF);
    atualizaPontos();

    //E inicia os loops do jogo
    intervaloDiminui = setInterval(() => { diminuiPontos() }, 1000);
    currentUpdate = setInterval(() => { update(ctx, nivel) }, delay + soma / (nivel + 1));
}



// Diminui a pontuacao do jogador a cada 1s e escreve na span de novo
function diminuiPontos() {

    if (pontosF <= 0) pontosF = 0;
    else pontosF -= pontosDiminui;

    $("#pont-f").html(pontosF);

}

// Atualiza o valor de pontos pra o caso de o jogador ter pego alguma moeda
function atualizaPontos() {

    $("#total").html(pontos);

}


// Cria todas entidades do jogo com base na matriz
function createEntities(nivel) {
    var file = files[nivel];
    entidades = [];
    moedas = [];
    player = undefined;

    // Varre a matriz em X e Y procurando moedas e caracteres que indiquem um jogador ou um monstro
    /**
     * 
     * C é fim do mapa
     * X é parede
     * O é jogador
     * M é moeda
     * H e D é um monstro indo pra direita
     * E é um monstro que começa indo pra esquerda
     * B e V sao monstros que comecam indo pra baixo
     * S é um monstro que comeca subindo e
     * '-' nao é nada
     */
    for (var x in file) {
        moedas[x] = [];
        for (var y in file[x]) {
            switch (file[x][y]) {
                case 'O':
                    player = Player(x, y, 0, 0);
                    entidades.push(player);
                    break;

                case 'H':
                    entidades.push(Monstro(x, y, 1, 0));
                    file[x][y] = "#";
                    break;
                case 'E':
                    entidades.push(Monstro(x, y, -1, 0));
                    file[x][y] = "#";
                    break;
                case 'D':
                    entidades.push(Monstro(x, y, 1, 0));
                    file[x][y] = "#";
                    break;
                case 'V':
                    entidades.push(Monstro(x, y, 0, 1));
                    file[x][y] = "#";
                    break;
                case 'S':
                    entidades.push(Monstro(x, y, 0, -1));
                    file[x][y] = "#";
                    break;
                case 'B':
                    entidades.push(Monstro(x, y, 0, 1));
                    file[x][y] = "#";
                    break;
                case 'M':
                    file[x][y] = "-";
                    moedas[x][y] = true;
                    break;



            }
        }
    }
}


// Se o jogador colide com um monstro chama perdeu
// Aumenta o numero de mortes do contador, seta morreu pra true e chama o jogador pro começo do nivel novamente
function perdeu() {

    //$("#jogo").css("visibility", "hidden");
    var mortes = document.getElementById("mortes").innerHTML;
    mortes = Number(mortes) + 1;
    document.getElementById("mortes").innerHTML = mortes;
    clearInterval(currentUpdate);
    morreu = true;
    play(nivel);

}

// Pra quando solta uma tecla, liberar a movimentacao naquele sentido
function checkKeyUp(e) {
    if (e.keyCode == esc)
        voltar();
    var event = window.event ? window.event : e;
    if (event.keyCode == up) {
        player.vx = 0;
    }
    if (event.keyCode == down) {
        player.vx = 0;
    }
    if (event.keyCode == left) {
        player.vy = 0;
    }
    if (event.keyCode == right) {
        player.vy = 0;
    }
}


// Pra quando aperta alguma tecla, acionar a movimentacao naquele sentido
function checkKey(e) {
    if (e.keyCode == esc)
        voltar();
    var event = window.event ? window.event : e;
    if (event.keyCode == up) {
        player.vx = -1;
    }
    if (event.keyCode == down) {
        player.vx = 1;
    }
    if (event.keyCode == left) {
        player.vy = -1;
    }
    if (event.keyCode == right) {
        player.vy = 1;
    }
}

// Update do jogo é bem simples, só chama o update de cada entidade do jogo e desenha tudo o que tá na matriz
function update(ctx, level) {
    for (var e in entidades) {
        entidades[e].anda(files[level]);
    }
    draw(ctx, files[level]);
}

// Passa todos os blocos desenhando o conteúdo deles
function draw(ctx, blocos) {

    for (var x in blocos) {
        for (var y in blocos[x]) {
            var cor;
            switch (blocos[x][y]) {
                case 'X':
                    cor = "#333333";
                    break;
                case '-':
                    cor = "#AAAAAA";
                    break;
                case 'O':
                    cor = "#0000FF";
                    break;
                case '#':
                    cor = "#FF0000";
                    break;
                case "C":
                    cor = "#00FF00";
                    break;

            }
            if (moedas[x][y]) cor = "#FFFF00";
            ctx.fillStyle = cor;

            // Preenche cada um dos retangulos (a esquacao é os resizes pelo tamanho do canvas lá do começo)
            ctx.fillRect(y * resizeX, x * resizeY, resizeX, resizeY);

        }
    }

}