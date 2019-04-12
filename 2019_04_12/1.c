#include<stdio.h>
#include<math.h>

int main(){
	
	int m;
	int dif = 0;
	int first = 1;
	int next;

	printf("Entre com o numero M: ");
	scanf("%d",&m);
	
	do {
		printf("\nEntre com o numero da lista: ");
		scanf("%d",&next);
		if(next != 0){

			if(first){
				dif = m - next;				
				first = 0;
			}
			else if(abs(m - next) < abs(dif)){
				dif = m - next;			
			}
		}


	} while (next != 0);

	if(!first) {

		printf("O numero mais proximo de 5 eh %d\n", m - dif);

	}

	return 0;
}
