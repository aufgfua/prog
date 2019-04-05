#include<stdio.h>
#include<math.h>

#define CURR_START 1
#define SUM_START 1


float arctang(float x, int times, int curr, int sum);

int main(){

	float val;
	int repTimes;

	printf("\nEntre com o valor de x para calcular arctan(x): ");
	scanf("%f",&val);

	if(val >= -1 && val <= 1){



		printf("\nEntre com o nro de termos: ");
		scanf("%d",&repTimes);

		printf("\nResultado para arctan(%g)= %f\n\n", val, arctang(val, repTimes, CURR_START, SUM_START));

	} else {

		printf("\n\nPoooooxa, não foi dessa vez que voce conseguiu, mas nao desista, ligue somente durante o programa! (Era de -1 a 1)\n\n");

	}

	return 0;
}


float arctang(float x, int times, int curr, int sum){

	float next = 0, currNum = curr * 2 - 1;

	if( curr < times ) {
		next = arctang(x, times, curr + 1, sum * -1);
	}

	return sum * (pow(x, currNum) / currNum) + next;

}
