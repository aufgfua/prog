var ctx = document.getElementById("jogo").getContext("2d");
ctx.canvas.height = $("body").height() / 2;
ctx.canvas.width = $("body").width() * 3 / 4;



var resizeX = Math.ceil(ctx.canvas.width / 40);
var resizeY = Math.ceil(ctx.canvas.height / 10);



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
            ctx.fillStyle = cor;
            ctx.fillRect(y * resizeX, x * resizeY, resizeX, resizeY);

        }
    }

}

draw(ctx, matriz);