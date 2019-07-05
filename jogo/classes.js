var Monstro = function(x, y, vx, vy) {
    var monstro = new Entidade(x, y, vx, vy, (blocos, x, y, obj) => {
        if (blocos[x][y] == "O")
            perdeu();
        else if (blocos[x][y] == "X" || blocos[x][y] == "C") {
            obj.vx *= -1;
            obj.vy *= -1;
            blocos[obj.x][obj.y] = '-';
            blocos[obj.x + obj.vx][obj.y + obj.vy] = '#';

        } else if (blocos[x][y] == '-') {
            blocos[x][y] = '#';
            blocos[obj.x][obj.y] = '-';
        } else if (blocos[x][y] == '#') {
            blocos[x][y] = '#';
            blocos[obj.x][obj.y] = '-';
        }



    });
    return monstro;
}






var Player = function(x, y, vx, vy) {
    var player = new Entidade(x, y, vx, vy, (blocos, x, y, obj) => {
        if (blocos[x][y] == "#")
            perdeu();
		else
        if (blocos[x][y] == "C"){
			
            blocos[obj.x][obj.y] = '-';
            ganhou();
		}
        else if (blocos[x][y] == "X") {
            obj.vx *= 0;
            obj.vy *= 0;

        } else if (blocos[x][y] == '-') {
            blocos[x][y] = 'O';
            blocos[obj.x][obj.y] = '-';
            if (moedas[x][y]) {
				document.getElementById('moeda').play();
                moedas[x][y] = false;
                pontos += 10;
            }
        }



    });
    return player;
}







var Entidade = function(x, y, vx, vy, andaBloco) {

    this.x = Number(x);
    this.y = Number(y);

    this.vx = Number(vx);
    this.vy = Number(vy);

    this.anda = function(blocos) {
        var posX = this.x + this.vx;
        var posY = this.y + this.vy;

        for (var x in blocos) {
            for (var y in blocos[x]) {
                if (x == posX && y == posY) {
                    andaBloco(blocos, x, y, this);
                }
            }
        }
        this.x += this.vx;
        this.y += this.vy;

    }





};