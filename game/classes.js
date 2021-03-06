/**
 * 
 * Retorna um objeto do tipo entidade, especializado para um Monstro
 * 
 * A função para movimento chamada pela entidade do tipo Monstro realiza colisão com o jogador (O),
 * com o fim do nível (C) e com paredes (X). Quando um monstro colide com uma parede ou com o fim do
 * nível, sua movimentação nos eixos é rebatida
 * 
 */
var Monstro = function(x, y, vx, vy) {
    var monstro = new Entidade(x, y, vx, vy, (blocos, x, y, obj) => {
        if (blocos[x][y] == "O") {

            blocos[x][y] = '#';
            var lastText = blocos[obj.x][obj.y];
            if (lastText == '#') {
                blocos[obj.x][obj.y] = '-';
            }
            document.getElementById('errou').play();

            setTimeout(() => perdeu(), 50);
        } else if (blocos[x][y] == "X" || blocos[x][y] == "C") {
            obj.vx *= -1;
            obj.vy *= -1;
            var lastText = blocos[obj.x][obj.y];
            if (lastText == '#') {
                blocos[obj.x][obj.y] = '-';
            }
            blocos[obj.x + obj.vx][obj.y + obj.vy] = '#';

        } else if (blocos[x][y] == '-') {
            blocos[x][y] = '#';
            var lastText = blocos[obj.x][obj.y];
            if (lastText == '#') {
                blocos[obj.x][obj.y] = '-';
            }
        } else if (blocos[x][y] == '#') {
            blocos[x][y] = '#';
            var lastText = blocos[obj.x][obj.y];
            if (lastText == '#') {
                blocos[obj.x][obj.y] = '-';
            }
        }



    });
    return monstro;
}





/**
 * 
 * Retorna um objeto do tipo entidade, especializado para um jogador
 * 
 * A função para movimento chamada pela entidade do tipo jogador realiza colisão com monstros (#),
 * com o fim do nível (c), com paredes (X) e moedas (M)
 * 
 */
var Player = function(x, y, vx, vy) {
    var player = new Entidade(x, y, vx, vy, (blocos, x, y, obj) => {

        switch (blocos[x][y]) {

            case '#':
                setTimeout(() => perdeu(), 50);
                document.getElementById('errou').play();
                break;
            case '-':
                blocos[x][y] = 'O';
                blocos[obj.x][obj.y] = '-';
                if (moedas[x][y]) {
                    document.getElementById('moeda').play();
                    moedas[x][y] = false;
                    pontos += 30;
                    atualizaPontos();
                }
                break;
            case 'C':
                blocos[obj.x][obj.y] = '-';
                ganhou();
                break;
            case 'X':
                obj.vx *= 0;
                obj.vy *= 0;
                break;

        }



    });
    return player;
}





/**
 * 
 * Entidade : Number Number Number Number (Matriz[int][int] Number Number Entidade -> Void) -> Void
 * 
 * Cria e popula um objeto de entidade com os atributos X e Y (na matriz)
 * Vx e Vy, velocidades nos eixos (são 1, 0 ou -1)
 * E a funcao Anda, que realiza o movimento da entidade, recebendo a lista de blocos do jogo (matriz).
 * A funcão anda chama a função recebida como parametro em andaBloco, que passa a lista de blocos (matriz)
 * recebida, a posicao X e Y futura do objeto e ao objeto que está inserida
 * 
 */

var Entidade = function(x, y, vx, vy, andaBloco) {

    this.x = Number(x);
    this.y = Number(y);

    this.vx = Number(vx);
    this.vy = Number(vy);

    this.anda = function(blocos) {
        var posX = this.x + this.vx;
        var posY = this.y + this.vy;

        andaBloco(blocos, posX, posY, this);

        this.x += this.vx;
        this.y += this.vy;

    }





};