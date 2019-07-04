var Monstro = function(x, y, vx, vy) {
    var monstro = new Entidade(x, y, vx, vy, (blocos, x, y) => {
        if (blocos[x][y] == "O")
            perdeu();
        else if (blocos[x][y] == "X") {
            this.vx *= -1;
            this.vy *= -1;

        } else if (blocos[x][y] == '-') {
            blocos[x][y] = '#';
            blocos[this.x][this.y] = '-';
        }



    });
    return monstro;
}






var Player = function(x, y, vx, vy) {
    var player = new Entidade(x, y, vx, vy, (blocos, x, y) => {
        if (blocos[x][y] == "#")
            perdeu();
        else if (blocos[x][y] == "X") {
            this.vx *= 0;
            this.vy *= 0;

        } else if (blocos[x][y] == '-') {
            blocos[x][y] = 'O';
            blocos[this.x][this.y] = '-';
            if (blocos[x][y].moeda) {
                blocos[x][y].moeda = false;
                pontos += 10;
            }
        }



    });
    return player;
}







var Entidade = function(x, y, vx, vy, andaBloco) {

    this.x = x;
    this.y = y;

    this.vx = vx;
    this.vy = vy;

    this.anda = function(blocos) {
        var posX = this.x + this.vx;
        var posY = this.y + this.vy;

        for (var x in blocos) {
            for (var y in blocos[x]) {
                if (x == posX && y == posY) {
                    andaBloco(blocos, x, y);
                }
            }
        }
        this.x += this.vx;
        this.y += this.vy;

    }





};