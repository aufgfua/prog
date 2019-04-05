#include<stdio.h>
#include<string.h>

#define BEGIN 20
#define END 49
#define E " e "
#define ARRAY_START 8 - 1

int main(){


	char words [12][20];
	char finalWord [50] = "";
	int n, soma;

	strcpy(words[0], "um");
	strcpy(words[1], "dois");
	strcpy(words[2], "tres");
	strcpy(words[3], "quatro");
	strcpy(words[4], "cinco");
	strcpy(words[5], "seis");
	strcpy(words[6], "sete");
	strcpy(words[7], "oito");
	strcpy(words[8], "nove");
	strcpy(words[9], "vinte");
	strcpy(words[10], "trinta");
	strcpy(words[11], "quarenta");

	printf("Informe um numero do intervalo [20, 49]: ");
	scanf("%d",&n);

	if(n >= BEGIN && n <= END){

		strcat(finalWord, words[n/10 + ARRAY_START]);

		if(n % 10){
			strcat(finalWord, E);
			strcat(finalWord, words[n%10 - 1]);
		}
	
		soma = n/10 + n%10;

		printf("\nSoma dos algarismos = %d\n", soma);
		printf("Extenso: %s\n", finalWord);

	} else {

		printf("\nEra pra ser entre 29 e 49 ne....\n");

	}

	


	return 0;
}
