#include<stdio.h>
#include<math.h>

///// Sinceramente não sei o que a função faz, mas ela lê um número, uma tolerancia e calcula uma formula até que a tolerancia seja atingida

int main(){
	
	double x, last, now;
	double e;
	int n = 1, first = 1, sign = 1, a = 0;;
	printf("\nInforme x: ");

	scanf("%lf", &x);

	


	if(x <= 1 && x >= -1){


		printf("\nInforme e: ");

		scanf("%lf",&e);

		if(e > 0){		

			first = 0;

			now = x / 2.0;

			do {
				a++;

				n += 2;
				sign *= -1;

				last = now;

				now += sign * (pow(x,n) / (n*(n+1)));
				
				
			} while (fabs(now - last) >= e);

			printf("%lf\n", last);
		}

	}

	if(first == 1){

		printf("\nAlgum valor foi invalido\n");

	}

}
