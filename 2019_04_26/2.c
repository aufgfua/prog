// Augusto Falcão Flach <augustofalcaoflach@gmail.com> <afflach@inf.ufrgs.br> <00314134> <github.com/aufgfua> <gitlab.com/augusto.flach>



#include<stdio.h>

#define TAMMAX 10


/*
    Esse programa recebe como entrada, via teclado, TAMMAX (define) elementos, sendo TAMMAX/2 pares e TAMMAX/2 impares.
    Após o fim da leitura de dados, o programa popula um vetor final com os elementos do inicial, mas com as posições dos elementos
    pares e impares invertida.
    Ao final, o programa exibe os elementos dos vetores inicial e final
*/
int main(){
    // array inicial, Final, Pares e Impares
    int arr[TAMMAX], arrF[TAMMAX], arrP[TAMMAX/2], arrI[TAMMAX/2];
    int aux, auxP=0, auxI=0, reader, erro = 0;

    printf("Informe %d numeros, separados igualmente em impares e pares, em qualquer ordem\n", TAMMAX);
    // Leitura do array
    for(aux = 0; aux < TAMMAX; aux++){
        if(!erro){
            scanf("%d", &reader);
            arr[aux] = reader;
            // Se o elemento for impar, adicionar ao vetor de numeros impares
            if(reader & 1){
                if(auxI > TAMMAX/2){
                    erro = 1;
                } else {
                    arrI[auxI] = reader;
                    auxI++;
                }

            // Se o elemento for par, adicionar ao vetor de numeros pares
            } else {
                if(auxP > TAMMAX/2){
                    erro = 1;
                } else {
                    arrP[auxP] = reader;
                    auxP++;
                }
            }
        }
    }
    // Se nenhum erro ocorreu, realizar o processamento do vetor final
    if(!erro){
        auxI = 0;
        auxP = 0;
        // Trocar de lugar os elementos pares e impares
        for(aux = 0; aux < TAMMAX; aux++){
            if(arr[aux] & 1){
                arrF[aux] = arrP[auxP];
                auxP++;
            } else {
                arrF[aux] = arrI[auxI];
                auxI++;
            }
        }
        // Saida do arranjo inicial
        printf("\nArranjo de entrada: ");
        for(aux = 0; aux < TAMMAX-1; aux++){
            printf("%d, ", arr[aux]);
        }
        printf("%d", arr[aux]);


        // Saida do arranjo final
        printf("\nArranjo de saida: ");
        for(aux = 0; aux < TAMMAX-1; aux++){
            printf("%d, ", arrF[aux]);
        }
        printf("%d", arrF[aux]);

    // Se ocorreu algum erro, informar o usuario
    } else  {
        printf("\nNumero de elementos pares e impares informados incorreto\nEsperados %d elementos de cada", TAMMAX/2);
    }

}
