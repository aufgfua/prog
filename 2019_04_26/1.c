// Augusto Falcão Flach <augustofalcaoflach@gmail.com> <afflach@inf.ufrgs.br> <00314134> <github.com/aufgfua> <gitlab.com/augusto.flach>



#include<stdio.h>
#include<math.h>

#define MAXLIDOS 10


/*

    O programa recebe até 10 valores reais (para parada de leitura, informar um valor negativo)
    Após a entrada de dados, os programa informa a média dos quadrados e das raízes quadradas dos valores lidos,
    e o número de valores situados entre as médias informadas (inclusivo)

*/
int main(){


    // Variáveis
    char sair = 0;
    int times = 0, aux, count = 0;
    double values[MAXLIDOS], mSqr = 0, mSqrt = 0, lw, gr; // lw e gr são para posicionar as médias das raízes e dos quadrados nos devidos extremos

    // Entrada
    printf("Entre os valores: ");
    while(times < MAXLIDOS && !sair){
        scanf("%lf", &values[times]);
        if(values[times] < 0) sair = 1;
        else times++;
    }

    // Médias das raizes
    for(aux = 0; aux < times; aux++){
        mSqr += pow(values[aux], 2) / times;
        mSqrt += sqrt(values[aux]) / times;
    }

    // Extremos do intervalo
    lw = mSqrt;
    gr = mSqr;

    if(mSqr < mSqrt){
        lw = mSqr;
        gr = mSqrt;
    }

    // Valores no intervalo
    for(aux = 0; aux < times; aux++){
        count += values[aux] >= lw && values[aux] <= gr ? 1 : 0;
    }

    // Saida de dados
    printf("\nMedia dos quadrados: %lf", mSqr);
    printf("\nMedia das raízes quadradas: %lf", mSqrt);
    printf("\nQuantidade de valores entre as duas medias: %d", count);
    return 0;
}
