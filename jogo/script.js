var ctx = document.getElementById("jogo").getContext("2d");
ctx.canvas.height = $("body").height() / 2;
ctx.canvas.width = $("body").width() * 3 / 4;

var up = 38;
var down = 40;
var left = 37;
var right = 39;

var pontos = 0;

var resizeX = Math.ceil(ctx.canvas.width / 40);
var resizeY = Math.ceil(ctx.canvas.height / 10);

var files;
var nivel = 0;
var filesOriginal;

var player;

var currentUpdate;

var moedas = [];

var entidades = [];



function arquivo(inputFiles) {
    if (typeof window.FileReader !== 'function')
        throw ("API de arquivo nao suportada");

    if (inputFiles) {
        $("#jogo").css("visibility", "visible");
		document.getElementById("mortes").innerHTML = 0;
        files = {};
        filesOriginal = [];
        var first = true;
        var count = 0;
        for (var f in inputFiles) {
            if (typeof inputFiles[f] !== 'object') continue;
            var reader = new FileReader();
            reader.readAsText(inputFiles[f]);
            var localC = count + 0;
            count++;
            if (first) {
                reader.onload = function(evt) {

                    filesOriginal[0] = procFile(evt.target.result);
					nivel = 0;
                    play(nivel);
                }
                first = false;
            } else
                reader.onload = function(evt) {

                    filesOriginal[localC] = procFile(evt.target.result);
                }
        }
    } else {
        console.log("Problema no arquivo")
    }
}


function ganhou(){
	alert("GANHOU");
	clearInterval(currentUpdate);
	if(filesOriginal.length > nivel + 1){
		nivel++;
		play(nivel);
	} else {
		alert("Terminou todos os niveis");
		$("#jogo").css("visibility", "hidden");
	}
		
}


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



function play(nivel) {
	
	files[nivel] = [];
	for(var x in filesOriginal[nivel]){
		if(files[nivel][x] == undefined) files[nivel][x] = [];
		for(var y in filesOriginal[nivel][x]){
			files[nivel][x][y] = filesOriginal[nivel][x][y].slice(0);
		}
		
	}
	
	
    createEntities(nivel);

    currentUpdate = setInterval(() => { update(ctx, nivel) }, 70 - 10*nivel);
}

function createEntities(nivel) {
    var file = files[nivel];
    entidades = [];
    moedas = [];
    player = undefined;
    for (var x in file) {
        moedas[x] = []
        for (var y in file[x]) {
            switch (file[x][y]) {
                case 'O':
                    player = Player(x, y, 0, 0)
                    entidades.push(player);
                    break;

                case 'H':
                    entidades.push(Monstro(x, y, 1, 0));
                    file[x][y] = "#";
                    break;
                case 'V':
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

function perdeu() {
	
    //$("#jogo").css("visibility", "hidden");
    var mortes = document.getElementById("mortes").innerHTML;
	mortes = Number(mortes) + 1;
	document.getElementById("mortes").innerHTML = mortes;
	clearInterval(currentUpdate);
	play(nivel);
	
}

document.onkeydown = checkKey;
document.onkeyup = checkKeyUp;


function checkKeyUp(e) {
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

function checkKey(e) {
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


function update(ctx, level) {
    for (var e in entidades) {
        entidades[e].anda(files[level]);
    }
    draw(ctx, files[level]);
}


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
            ctx.fillRect(y * resizeX, x * resizeY, resizeX, resizeY);

        }
    }

}