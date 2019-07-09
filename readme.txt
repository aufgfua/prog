Fiz o trabalho sozinho (Augusto Falcão Flach - 00314134 - afflach)

Dividi o programa em 3 arquivos:

Classes.js - contém três classes:

Entidade (objetos com X e Y do jogo, e que podem se mover);
Jogador, que simula uma herança de entidade, especializando a ação de se mover para colidir com objetos, paredes, moedas, etc.; e
Monstro, que também "herda" de entidade, especializando a ação de se mover, com as devidas colisões.

Script.js - que contém os métodos e funções que o jogo utiliza:

As principais funções que o jogo utiliza são a de iniciar o jogo, que inicia o loop de Update do jogo, que desenha cada elemento da matriz na tela, a função que recebe os arquivos de texto, transorma eles em matrizes 40x15 (dá mais margem pro movimento dos níveis) de texto e os guarda e a função que lê a matriz e transforma os elementos móveis em entidades, para que se mexam durante a função Update.

Para usar o programa, abra o arquivo jogo.html. Provavelmente é necessário que seja aberto com um navegador +- atualizado, senão não tenho certeza se roda. Daí, o jogador só deve clicar no botão de carregar os níveis, e então o botão de Novo Jogo deve ser habilitado.

Daí é só clicar em "Novo Jogo", informar o nome do jogador e jogar.

Substitui a tecla de voltar pro menu por ESC, ao invés de TAB, pois a tecla TAB faz com que se navegue por elementos da tela no navegador.
Também achei mais divertido que o usuário possa seguir jogando, então a contagem de pontos, para o ranking, é reaberta após uma sessão de jogo, e os pontos acumulados seguem existindo.