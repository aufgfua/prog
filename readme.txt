Fiz o trabalho sozinho (Augusto Falc�o Flach - 00314134 - afflach)

Dividi o programa em 3 arquivos:

Classes.js - cont�m tr�s classes:

Entidade (objetos com X e Y do jogo, e que podem se mover);
Jogador, que simula uma heran�a de entidade, especializando a a��o de se mover para colidir com objetos, paredes, moedas, etc.; e
Monstro, que tamb�m "herda" de entidade, especializando a a��o de se mover, com as devidas colis�es.

Script.js - que cont�m os m�todos e fun��es que o jogo utiliza:

As principais fun��es que o jogo utiliza s�o a de iniciar o jogo, que inicia o loop de Update do jogo, que desenha cada elemento da matriz na tela, a fun��o que recebe os arquivos de texto, transorma eles em matrizes 40x15 (d� mais margem pro movimento dos n�veis) de texto e os guarda e a fun��o que l� a matriz e transforma os elementos m�veis em entidades, para que se mexam durante a fun��o Update.

Para usar o programa, abra o arquivo jogo.html. Provavelmente � necess�rio que seja aberto com um navegador +- atualizado, sen�o n�o tenho certeza se roda. Da�, o jogador s� deve clicar no bot�o de carregar os n�veis, e ent�o o bot�o de Novo Jogo deve ser habilitado.

Da� � s� clicar em "Novo Jogo", informar o nome do jogador e jogar.

Substitui a tecla de voltar pro menu por ESC, ao inv�s de TAB, pois a tecla TAB faz com que se navegue por elementos da tela no navegador.
Tamb�m achei mais divertido que o usu�rio possa seguir jogando, ent�o a contagem de pontos, para o ranking, � reaberta ap�s uma sess�o de jogo, e os pontos acumulados seguem existindo.