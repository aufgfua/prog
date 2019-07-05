#define _WIN32_WINNT 0x0500


#include<Windows.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>


#define NLinhas 10
#define NColunas 8
#define C14 CasaAL(0.34*(*A)+x-1,0.42*(*L));
#define C15 CasaAL(0.34*(*A)+x-1,0.52*(*L));
#define C24 CasaAL(0.34*(*A)+9+x,0.42*(*L));
#define C25 CasaAL(0.34*(*A)+9+x,0.52*(*L));

#define D13 CasaAL(0.34*(*A)+x-1,0.37*(*L));
#define D14 CasaAL(0.34*(*A)+x-1,0.47*(*L));
#define D15 CasaAL(0.34*(*A)+x-1,0.57*(*L));
#define D23 CasaAL(0.34*(*A)+9+x,0.37*(*L));
#define D24 CasaAL(0.34*(*A)+9+x,0.47*(*L));
#define D25 CasaAL(0.34*(*A)+9+x,0.57*(*L));

#define E13 CasaAL(0.34*(*A)+x-1,0.32*(*L));
#define E14 CasaAL(0.34*(*A)+x-1,0.42*(*L));
#define E15 CasaAL(0.34*(*A)+x-1,0.52*(*L));
#define E16 CasaAL(0.34*(*A)+x-1,0.62*(*L));
#define E23 CasaAL(0.34*(*A)+9+x,0.32*(*L));
#define E24 CasaAL(0.34*(*A)+9+x,0.42*(*L));
#define E25 CasaAL(0.34*(*A)+9+x,0.52*(*L));
#define E26 CasaAL(0.34*(*A)+9+x,0.62*(*L));

#define F12 CasaAL(0.34*(*A)+x-1,0.27*(*L));
#define F13 CasaAL(0.34*(*A)+x-1,0.37*(*L));
#define F14 CasaAL(0.34*(*A)+x-1,0.47*(*L));
#define F15 CasaAL(0.34*(*A)+x-1,0.57*(*L));
#define F16 CasaAL(0.34*(*A)+x-1,0.67*(*L));
#define F22 CasaAL(0.34*(*A)+9+x,0.27*(*L));
#define F23 CasaAL(0.34*(*A)+9+x,0.37*(*L));
#define F24 CasaAL(0.34*(*A)+9+x,0.47*(*L));
#define F25 CasaAL(0.34*(*A)+9+x,0.57*(*L));
#define F26 CasaAL(0.34*(*A)+9+x,0.67*(*L));

#define G12 CasaAL(0.34*(*A)+x-1,0.22*(*L));
#define G13 CasaAL(0.34*(*A)+x-1,0.32*(*L));
#define G14 CasaAL(0.34*(*A)+x-1,0.42*(*L));
#define G15 CasaAL(0.34*(*A)+x-1,0.52*(*L));
#define G16 CasaAL(0.34*(*A)+x-1,0.62*(*L));
#define G17 CasaAL(0.34*(*A)+x-1,0.72*(*L));
#define G22 CasaAL(0.34*(*A)+9+x,0.22*(*L));
#define G23 CasaAL(0.34*(*A)+9+x,0.32*(*L));
#define G24 CasaAL(0.34*(*A)+9+x,0.42*(*L));
#define G25 CasaAL(0.34*(*A)+9+x,0.52*(*L));
#define G26 CasaAL(0.34*(*A)+9+x,0.62*(*L));
#define G27 CasaAL(0.34*(*A)+9+x,0.72*(*L));

void FO(void);
void tecla(short *L, short *A);
int divs(float a,float b);
void CasaAL(SHORT x, SHORT y);
void MudarTamanhoTela(SHORT *Larg, SHORT *Alt);
void Barra (SHORT *Larg, SHORT *Alt);
void Fecha();
void Intro(short *L, short *A);
void menu(short *L,short *A, int *opc);
void UmP(short *L, short *A, int *estA,int **Mat);
void mudaMus(SHORT *L, SHORT *A, long unsigned int *Mus, HANDLE *MA,int *estA);
void Carta1(int *x);
void Carta2(int *x);
void Carta3(int *x);
void Carta4(int *x);
void Carta5(int *x);
void Carta6(int *x);
void Carta7(int *x);
void Carta8(int *x);
void Carta9(int *x);
void Carta10(int *x);
void CartaV(int *x);
void N2(SHORT *L,SHORT *A,int **Mat);
void N1(SHORT *L,SHORT *A,int **Mat);
void mario(void);
void N4(SHORT *L,SHORT *A,int **Mat);
void Carta11(int *x);
void Carta12(int *x);
void Carta13(int *x);
void Carta14(int *x);
void Metal(void);
void CB(void);
void N3(SHORT *L,SHORT *A,int **Mat);
void Ltecla(short *L,short *A);
void N5(SHORT *L,SHORT *A,int **Mat);
void Historico(short *L,short *A);
void Tuto(short *L,short *A);
void Musi(void);
int main(){
	SHORT L,A;
	int opc=1,est=1,**Mat;
	long unsigned int Mus;
	HANDLE MA;
	MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)mario,NULL,0,&Mus);
	MudarTamanhoTela(&L,&A);
	Intro(&L,&A);
	while(opc!=6){
		menu(&L,&A,&opc);
		if (opc==666) est=5;
		switch(opc){
			case 1:
				UmP(&L,&A,&est,Mat);

			break;
			case 2:
			break;
			case 3:
				Tuto(&L,&A);
			break;
			case 4:
				mudaMus(&L,&A,&Mus,&MA,&est);
			break;
			case 5:
				Historico(&L,&A);
			break;
		}
	}
	Fecha();
}
void Carta11(int *x){
	switch(*x){
	case 1:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
		 break;
		 case 2:
		 printf("%c  %c  %c  %c\n",186,126,126,186);
		 break;
		 case 3:
		 printf("%c  %c  %c  %c\n",186,64,64,186);
		 break;
		 case 4:
		 printf("%c        %c\n",186,186);
		 break;
		 case 5:
		 printf("%c   %c%c   %c\n",186,33,33,186);
		 break;
		 case 6:
		 printf("%c        %c\n",186,186);
		 break;
		 case 7:
		 printf("%c  %c%c%c%c  %c\n",186,170,170,170,170,186);
		 break;
		 case 8:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
		 break;
	}
}
void Carta12(int *x){
	switch(*x){
		case 1:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
		 break;
		 case 2:
		 printf("%c  %c  %c  %c\n",186,205,205,186);
		 break;
		 case 3:
		 printf("%c  %c  %c  %c\n",186,184,184,186);
		 break;
		 case 4:
		 printf("%c        %c\n",186,186);
		 break;
		 case 5:
		 printf("%c   %c%c   %c\n",186,93,93,186);
		 break;
		 case 6:
		 printf("%c        %c\n",186,186);
		 break;
		 case 7:
		 printf("%c  %c%c%c%c  %c\n",186,170,170,170,170,186);
		 break;
		 case 8:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
		 break;
	}
}
void Carta13(int *x){
	switch(*x){
		 case 1:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
		 break;
		 case 2:
		 printf("%c  %c  %c  %c\n",186,205,205,186);
		 break;
		 case 3:
		 printf("%c  %c  %c  %c\n",186,63,63,186);
		 break;
		 case 4:
		 printf("%c        %c\n",186,186);
		 break;
		 case 5:
		 printf("%c   %c%c   %c\n",186,105,105,186);
		 break;
		 case 6:
		 printf("%c        %c\n",186,186);
		 break;
		 case 7:
		 printf("%c  %c%c%c%c  %c\n",186,97,97,97,97,186);
		 break;
		 case 8:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
		 break;
	}
}
void Carta14(int *x){
	switch(*x){
		case 1:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
		 break;
		 case 2:
		 printf("%c  %c  %c  %c\n",186,205,205,186);
		 break;
		 case 3:
		 printf("%c  %c  %c  %c\n",186,35,35,186);
		 break;
		 case 4:
		 printf("%c        %c\n",186,186);
		 break;
		 case 5:
		 printf("%c   %c%c   %c\n",186,38,38,186);
		 break;
		 case 6:
		 printf("%c        %c\n",186,186);
		 break;
		 case 7:
		 printf("%c  %c%c%c%c  %c\n",186,35,35,35,35,186);
		 break;
		 case 8:
		 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
		 break;
	}
}
void Musi(void){
	while (1){
		Beep(1480,200);
		Beep(1568,200);
		Beep(1568,200);
		Beep(1568,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(369.99,200);
		Beep(392,200);
		Beep(369.99,200);
		Beep(392,200);
		Beep(392,400);
		Beep(196,400);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Beep(880,200);
		Beep(783.99,200);
		Beep(698.46,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Sleep(200);
		Beep(1108,10);
		Beep(1174.7,200);
		Beep(1480,10);
		Beep(1568,200);
		Sleep(200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(783.99,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(880,200);
		Beep(830.61,200);
		Beep(880,200);
		Beep(987.77,400);
		Beep(880,200);
		Beep(783.99,200);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(784,200);
		Beep(880,400);
		Beep(784,200);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(784,400);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(523.25,200);
		Beep(587.33,200);
		Beep(659.25,200);
		Beep(698.46,400);
		Beep(659.25,200);
		Beep(587.33,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Sleep(400);
		Beep(349.23,400);
		Beep(392,200);
		Beep(329.63,200);
		Beep(523.25,200);
		Beep(493.88,200);
		Beep(466.16,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Beep(880,200);
		Beep(493.88,200);
		Beep(880,200);
		Beep(1760,200);
		Beep(440,200);
		Beep(392,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(783.99,200);
		Beep(440,200);
		Beep(783.99,200);
		Beep(1568,200);
		Beep(392,200);
		Beep(349.23,200);
		Beep(392,200);
		Beep(440,200);
		Beep(698.46,200);
		Beep(415.2,200);
		Beep(698.46,200);
		Beep(1396.92,200);
		Beep(349.23,200);
		Beep(329.63,200);
		Beep(311.13,200);
		Beep(329.63,200);
		Beep(659.25,200);
		Beep(698.46,400);
		Beep(783.99,400);
		Beep(440,200);
		Beep(493.88,200);
		Beep(523.25,200);
		Beep(880,200);
		Beep(493.88,200);
		Beep(880,200);
		Beep(1760,200);
		Beep(440,200);
		Beep(392,200);
		Beep(440,200);
		Beep(493.88,200);
		Beep(783.99,200);
		Beep(440,200);
		Beep(783.99,200);
		Beep(1568,200);
		Beep(392,200);
		Beep(349.23,200);
		Beep(392,200);
		Beep(440,200);
		Beep(698.46,200);
		Beep(659.25,200);
		Beep(698.46,200);
		Beep(739.99,200);
		Beep(783.99,200);
		Beep(392,200);
		Beep(392,200);
		Beep(392,200);
		Beep(392,200);
		Beep(196,200);
		Beep(196,200);
		Beep(196,200);
		Beep(185,200);
		Beep(196,200);
		Beep(185,200);
		Beep(196,200);
		Beep(207.65,200);
		Beep(220,200);
		Beep(233.08,200);
		Beep( 246.94,200);
	}
}
void tecla(short *L,short *A){

	char m[100];
	int s;
	if (*L < 100 && ((0.88*(*A)-0.34*(*A))<20)){
		sprintf(m,"Aperte Enter");
		s=strlen(m);
		CasaAL(*A-3,*L/2-s/2);
		printf("%s",m);
	}
	else
	{
		if (*L >= 100 && ((0.88*(*A)-0.34*(*A))<20)){
			sprintf(m,"Clique em qualquer tecla para continuar");
			s=strlen(m);
			CasaAL((*A)-3,*L/2-s/2);
			printf("%s",m);
		}
		else
		{
			if (*L >= 100 && ((0.88*(*A)-0.34*(*A))>=20)){
				sprintf(m,"Clique em qualquer tecla para continuar");
				s=strlen(m);
				CasaAL(0.88*(*A),*L/2-s/2);
				printf("%s",m);
			}
			else
			{
				if (*L < 100 && ((0.88*(*A)-0.34*(*A))>=20)){
					sprintf(m,"Aperte Enter");
					s=strlen(m);
					CasaAL(0.88*(*A),*L/2-s/2);
					printf("%s",m);
				}
			}
		}
	}

}
void Ltecla(short *L,short *A){
	char m[100];
	int s;
	if (*L < 100 && ((0.88*(*A)-0.34*(*A))<20)){
		sprintf(m,"            ");
		s=strlen(m);
		CasaAL(*A-3,*L/2-s/2);
		printf("%s",m);
	}
	else
	{
		if (*L >= 100 && ((0.88*(*A)-0.34*(*A))<20)){
			sprintf(m,"                                       ");
			s=strlen(m);
			CasaAL((*A)-3,*L/2-s/2);
			printf("%s",m);
		}
		else
		{
			if (*L >= 100 && ((0.88*(*A)-0.34*(*A))>=20)){
				sprintf(m,"                                       ");
				s=strlen(m);
				CasaAL(0.88*(*A),*L/2-s/2);
				printf("%s",m);
			}
			else
			{
				if (*L < 100 && ((0.88*(*A)-0.34*(*A))>=20)){
					sprintf(m,"            ");
					s=strlen(m);
					CasaAL(0.88*(*A),*L/2-s/2);
					printf("%s",m);
				}
			}
		}
	}
}
int divs(float a,float b){

int c = a/b;
return c;
}
void Metal(void){
	while(1){
		Beep(329,300);
		Beep(493,300);
		Beep(698,300);
		Beep(659,600);

		Beep(783,300);
		Beep(698,300);
		Beep(659,600);

		Beep(329,100);
		Beep(493,300);
		Beep(698,300);
		Beep(659,600);

		Beep(392,250);
		Beep(440,200);
		Beep(587,300);

		Beep(349,250);
		Beep(587,500);

		Beep(329,300);
		Beep(493,300);
		Beep(698,300);
		Beep(659,600);

		Beep(783,300);
		Beep(698,300);
		Beep(659,600);

		Beep(329,100);
		Beep(493,300);
		Beep(698,300);
		Beep(659,600);

		Beep(392,250);
		Beep(440,200);
		Beep(587,300);

		Beep(349,250);
		Beep(587,400);

	}
}
void CasaAL(SHORT x, SHORT y){
	COORD Casa;
	Casa.X=y;
	Casa.Y=x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Casa);
}
void N1(SHORT *L,SHORT *A,int **Mat){
	int x=0,tentativas=0,acertos=0;
	Mat=(int**)malloc(sizeof(int*)*2);
	for (x=0;x<2;x++){
		Mat[x]=(int*)malloc(sizeof(int)*2);
	}
	srand(time(NULL));
	int vet[2];
	vet[0]=rand()%10+1;
	do{
		vet[1]=rand()%10+1;
	}while(vet[1]==vet[0]);
	int a=0,b=0,c=0,vet2[2]={0};
	do{
		Mat[a][b]=rand()%10+1;
		if(vet[0]== Mat[a][b] && vet2[0] < 2){
			vet2[0]++;
			b++;
			c++;
		}else
		{
			if(vet[1]==Mat[a][b] && vet2[1] < 2){
				vet2[1]++;
				b++;
				c++;
			}
		}
		if (b>=2){
			b=0;
			a++;
		}
	}	while(c<4);
	system("cls");
	Barra(L,A);
	char m[100];
	int s,linha,coluna,y,linha2,coluna2,cont=0;
	sprintf(m,"Nome do Jogador :");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("          ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	fflush(stdin);
	char nome[20];
	scanf("%s",nome);
	printf("                           ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("                           ");
	sprintf(m,"Nivel de dificuldade 1");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	c=0;
	for(x=0;x<9;x++){
		C14
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		C15
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		C24
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		C25
		CartaV(&x);
	}
	do{
		linha=0;
		coluna=0;
		linha2=0;
		coluna2=0;
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("          ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha);
		}while(linha<1||linha>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna);
		}while(coluna<1||coluna>2);

		for(y=0;y<4;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						C14
					break;
					case 1:
						C15
					break;
					case 2:
						C24
					break;
					case 3:
						C25
					break;
				}
				if(Mat[y/2][y%2]!=-1){
					if (y/2+1 == linha && y%2+1 == coluna){
						Sleep(40);
						switch(Mat[linha-1][coluna-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						CartaV(&x);

					}
				}
			}
		}
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha2);
		}while(linha2<1||linha2>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna2);
		}while(coluna2<1||coluna2>2);

		for(y=0;y<4;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						C14
					break;
					case 1:
						C15
					break;
					case 2:
						C24
					break;
					case 3:
						C25
					break;
				}
				if(Mat[y/2][y%2]!=-1){
					if (y/2+1 == linha2 && y%2+1 == coluna2){
						Sleep(40);
						switch(Mat[linha2-1][coluna2-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						if(!(y/2+1 == linha && y%2+1 == coluna)){

							CartaV(&x);
						}
					}
				}
			}
		}
		if ((Mat[linha-1][coluna-1])==(Mat[linha2-1][coluna2-1]) && (linha != linha2 || coluna != coluna2) && ((Mat[linha-1][coluna-1]!=-1)&&(Mat[linha2-1][coluna2-1]!=-1))){
			Mat[linha-1][coluna-1]=-1;
			Mat[linha2-1][coluna2-1]=-1;
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ACERTO MIZERAVI            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
			cont++;
		}
		else
		{
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ERROOU            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
		}
		CasaAL(0.25*(*A)+1,*L/2);
		printf("  ");
		CasaAL(0.25*(*A)+1,*L/2);
		tecla(L,A);
		fflush(stdin);
		CasaAL(0.25*(*A)+1,*L/2);
		getch();
		fflush(stdin);
		Ltecla(L,A);
		if (cont<3){
			for(y=0;y<4;y++){
				for (x=0;x<9;x++){
					switch(y){
						case 0:
							C14
						break;
						case 1:
							C15
						break;
						case 2:
							C24
						break;
						case 3:
							C25
						break;
					}
					if(Mat[y/2][y%2]!=-1){

						if ((y/2+1 == linha2 && y%2+1 == coluna2) || (y/2+1 == linha && y%2+1 == coluna)){
							Sleep(40);
						}
						CartaV(&x);

					}
					else
					{

						if ((y/2+1 == linha2 && y%2+1 == coluna2) || (y/2+1 == linha && y%2+1 == coluna)){
							Sleep(40);
						}
						printf("          ");
					}
				}
			}
		}
	CasaAL(0.25*(*A)+1,*L/2);
	printf("  ");
	CasaAL(0.25*(*A)+1,*L/2);
	tentativas++;
	}while(cont<2);
	acertos=2;
	CasaAL(0.25*(*A),*L-15);
	sprintf(m,"            Desbloqueou nivel 2 e uma nova musica            ");
	s=strlen(m);
	CasaAL(0.25*(*A),*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	struct tm *Data;
	time_t Tempo;
	Tempo=time(NULL);
	Data=localtime(&Tempo);
	fflush(stdin);
	FILE* Arq=fopen("Nivel1.txt","a");
	fprintf(Arq,"%d/%d/%d - %d:%d\nJogador %s fez %d Acertos com %d Tentativas\n",(*Data).tm_mday,(*Data).tm_mon+1,(*Data).tm_year+1900,(*Data).tm_hour,(*Data).tm_min,nome,acertos,tentativas);
	fclose(Arq);
	CasaAL(0.25*(*A)+1,*L/2);
	getch();
	fflush(stdin);
	Ltecla(L,A);
	for(x=0;x<2;x++){
		free(Mat[x]);
	}
	free(Mat);


}
void MudarTamanhoTela(SHORT *Larg, SHORT *Alt){
	HWND P;
	P= GetConsoleWindow();

	ShowWindow(P,SW_MAXIMIZE);
	HANDLE B=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Tela = GetLargestConsoleWindowSize(B);
/*	SetConsoleScreenBufferSize(B, Tela);

	SetConsoleWindowInfo(B,TRUE,&((SMALL_RECT) {0,0,Tela.X-1,Tela.Y-1}));

	getch();*/
	SMALL_RECT Tamanho;
	SetWindowPos(P,0,0.56*Tela.X,1.22*Tela.Y,0,0,SWP_NOZORDER);
	Tamanho.Left=0;
	Tamanho.Top=0;
	Tamanho.Right=0.85 * Tela.X;
	Tamanho.Bottom=0.83*Tela.Y;
	COORD T2 ;
	T2.X=Tamanho.Right+2;
	T2.Y=Tamanho.Bottom;
	Tamanho.Right++;
	Tamanho.Bottom--;
	*Larg=Tamanho.Right-1;
	*Alt=Tamanho.Bottom+1;
	Tamanho.Bottom++;
	SetConsoleScreenBufferSize(B, Tela);
	SetConsoleWindowInfo(B,TRUE,&Tamanho);
	SetConsoleScreenBufferSize(B,T2);
	SetConsoleTitle("Game Of Memoria - Augusto & Viegas");
}
void Barra (SHORT *Larg, SHORT *Alt){
	int x;
	HWND P;
	P=(HWND)GetConsoleWindow();
	ShowWindow(P,SW_MAXIMIZE);
	HANDLE B=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Tela = GetLargestConsoleWindowSize(B);
	SMALL_RECT Tamanho;
	Tamanho.Left=0;
	Tamanho.Top=0;
	Tamanho.Right=0.85 * Tela.X;
	Tamanho.Bottom=0.83	*Tela.Y;
	COORD T2 ;
	T2.X=Tamanho.Right+2;
	T2.Y=Tamanho.Bottom+1;
	Tamanho.Right+=1;
	Tamanho.Bottom;
	SetConsoleScreenBufferSize(B,T2 );
	printf("%c",201);
	for (x=1;x<*Larg;x++){
		printf("%c",205);
	}
	printf("%c",187);
	CasaAL(1,0);
	printf("%c",186);
	for (x=1;x<*Larg;x++){
		printf("*");
	}
	printf("%c",186);
	CasaAL(2,2);
	printf("%c%c%c",201,205,205);
	CasaAL(2,*Larg-4);
	printf("%c%c%c",205,205,187);
	CasaAL(3,2);
	printf("%c",186);
	CasaAL(3,*Larg-2);
	printf("%c",186);
	CasaAL(*Alt-1,0);
	for (x=1;x<*Larg;x++){
		printf("*");
	}
	CasaAL(*Alt,0);
	printf("%c",200);
	for (x=0;x<*Larg-1;x++){
		printf("%c",205);
	}


	printf("%c",188);
	CasaAL(0,0);
	printf("%c%c",201,205);
	CasaAL(0,*Larg-1);
	printf("%c%c",205,187);
	for (x=2;x<*Alt;x++){
		CasaAL(x,0);
		printf("%c*",186);
		CasaAL(x,*Larg-1);
		printf("*%c",186);
	}
	CasaAL(*Alt-2,2);
	printf("%c%c%c",200,205,205);
	CasaAL(*Alt-2,*Larg-4);
	printf("%c%c%c",205,205,188);
	CasaAL(*Alt-3,2);
	printf("%c",186);
	CasaAL(*Alt-3,*Larg-2);
	printf("%c",186);
	SetConsoleWindowInfo(B,TRUE,&Tamanho);
}
void Fecha(){
	HWND T;
	T = (HWND)GetConsoleWindow();
	CloseWindow(T);
}
void Intro(short *L, short *A){
	int s;
	system("cls");
	Barra(L,A);
	char m[100]="Jogo da Memoria";
	s= strlen(m);
	CasaAL((0.3*(*A)),(*L/2-(s/2+2)));
	printf("%s",m);
	sprintf(m,"Feito por");
	s=strlen(m);
	CasaAL (*A-5,(*L-23-s/2));
	printf("%s",m);
	sprintf(m,"Gabriel Viegas e Augusto Falcao");
	s=strlen(m);
	CasaAL(*A-4,*L-23-s/2);
	printf("%s",m);
	sprintf(m,"IFRS Campus Canoas");
	s=strlen(m);
	CasaAL(*A-3,*L-23-s/2);
	printf("%s",m);
	CasaAL (0.3*(*A)+2,*L/2-2);
	tecla(L,A);
	CasaAL((0.3*(*A))+2,*L/2-2);
	getch();



}
void menu(short *L,short *A, int *opc){
	system("cls");
	Barra(L,A);
	char m[100]="Modos:";
	int s;
	s=strlen(m);
	CasaAL(0.3*(*A)-2,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"1 - Um Player");
	s=strlen(m);
	CasaAL(0.3*(*A),*L/2-s/2);
	printf("%s",m);
	sprintf(m,"2 - Dois Players  ---  Nao funciona");
	s=strlen(m);
	CasaAL(0.3*(*A)+1,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"3 - Como Jogar");
	s=strlen(m);
	CasaAL(0.3*(*A)+2,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"4 - Mudar/Desativar Musica");
	s=strlen(m);
	CasaAL(0.3*(*A)+3,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"5 - Historico");
	s=strlen(m);
	CasaAL(0.3*(*A)+4,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"6 - Sair");
	s=strlen(m);
	CasaAL(0.3*(*A)+5,*L/2-s/2);
	printf("%s",m);
	if(*opc>0&&*opc<6 || *opc==666){
		CasaAL(0.3*(*A)+7,*L/2);
		fflush(stdin);
		scanf("%d",opc);
	}
	else
	{
		sprintf(m,"(Informe um numero valido)");
		s=strlen(m);
		CasaAL(0.3*(*A)+7,*L/2-2-s/2+2);
		printf("%s",m);
		CasaAL(0.3*(*A)+8,*L/2);
		fflush(stdin);
		scanf("%d",opc);
	}
}
void UmP(short *L, short *A, int *estA,int **Mat){
	Errou:
	system("cls");
	int esc,s,x;
	char m[100];
	Barra(L,A);
	sprintf(m,"Niveis atuais desbloqueados :");
	s=strlen(m);
	CasaAL(0.3*(*A)-2,*L/2-s/2);
	printf("%s",m);

	if(*estA%2){//Impar
		CasaAL(0.3*(*A),*L/2-((*estA/2)*4));
		for (x=1;x<=*estA;x++){
			if (x<6){
				printf("%d   ",x);
			}
		}
	}
	else
	{//Par
		CasaAL(0.3*(*A),*L/2-(2+(((*estA/2)-1)*4)));
		for (x=1;x<=*estA;x++){
			if (x<6){
				printf("%d   ",x);
			}
		}
	}
	sprintf(m,"Escolha um nivel para jogar");
	s=strlen(m);
	CasaAL(0.3*(*A)+2,*L/2-s/2);

	printf("%s",m);
	sprintf(m,"Digite -1 para sair");
	s=strlen(m);
	CasaAL(0.3*(*A)+3,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.3*(*A)+5,*L/2);
	fflush(stdin);
	scanf("%d",&esc);
	if (esc>0&&esc<=*estA && esc<6){
		switch(esc){
			case 1:
				N1(L,A,Mat);
			break;
			case 2:
				N2(L,A,Mat);
			break;
			case 3:
				N3(L,A,Mat);
			break;
			case 4:
				N4(L,A,Mat);
			break;
			case 5:
				if (*L<100){
					system("cls");
					Barra(L,A);
					sprintf(m,"Resolucao nao suportada");
					s=strlen(m);
					CasaAL(0.3*(*A)-2,*L/2-s/2);
					printf("%s",m);
					CasaAL(0.3*(*A),*L/2);
					tecla(L,A);
					fflush(stdin);
					getch();
					Ltecla(L,A);
					goto Errou;
				}
				else
				{
					N5(L,A,Mat);
				}
			break;
		}
	}
	else
	{
		if (esc!=-1){
			system("cls");
			Barra(L,A);
			sprintf(m,"Nivel Invalido");
			s=strlen(m);
			CasaAL(0.3*(*A)-2,*L/2-s/2);
			printf("%s",m);
			CasaAL(0.3*(*A),*L/2);
			getch();
			goto Errou;
		}

	}
	if (esc==*estA && *estA != 5){
		(*estA)++;
	}
}
void mario(void){
	while(1){
		int nota;
		int melodia[] = {660,660,660,510,660,770,380,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,510,380,320,440,480,450,430,380,660,760,860,700,760,660,520,580,480,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,760,720,680,620,650,380,430,500,430,500,570,500,760,720,680,620,650,1020,1020,1020,380,500,760,720,680,620,650,380,430,500,430,500,570,585,550,500,380,500,500,500,500,500,500,500,580,660,500,430,380,500,500,500,500,580,660,870,760,500,500,500,500,580,660,500,430,380,660,660,660,510,660,770,380};
		int duracaodasnotas[] = {100,100,100,100,100,100,100,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,80,100,100,100,80,50,100,80,50,80,80,80,80,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,150,200,80,80,80,100,100,100,100,100,150,150,100,100,100,100,100,100,100,100,100,100,100,100,100,60,80,60,80,80,80,80,80,80,60,80,60,80,80,80,80,80,60,80,60,80,80,80,80,80,80,100,100,100,100,100,100,100};
		int pausadepoisdasnotas[] ={150,300,300,100,300,550,575,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,450,400,500,300,330,150,300,200,200,150,300,150,350,300,150,150,500,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,300,100,150,150,300,300,150,150,300,150,100,220,300,100,150,150,300,300,300,150,300,300,300,100,150,150,300,300,150,150,300,150,100,420,450,420,360,300,300,150,300,150,300,350,150,350,150,300,150,600,150,300,350,150,150,550,325,600,150,300,350,150,350,150,300,150,600,150,300,300,100,300,550,575};
	    for (nota = 0; nota < 156; nota++) {
			Beep(melodia[nota],duracaodasnotas[nota]);
			Sleep((pausadepoisdasnotas[nota]-90));
		}
	}
}
void CB(void){
	while(1)
	{
		Beep(196,200);
		Beep(293,200);
		Beep(392,300);
		Beep(196,200);
		Beep(293,200);
		Beep(392,600);
		Beep(100,200);
		Beep(196,200);
		Beep(293,200);
		Beep(392,500);
		Beep(100,100);
		Beep(196,200);
		Beep(293,200);
		Beep(329,500);
		Beep(196,200);
		Beep(293,200);
		Beep(392,300);
		Beep(196,200);
		Beep(293,200);
		Beep(392,600);
		Beep(100,200);
		Beep(196,200);
		Beep(293,200);
		Beep(329,300);
		Beep(100,100);
		Beep(196,200);
		Beep(293,300);
		Beep(329,800);
		Beep(196,200);
		Beep(293,200);
		Beep(392,300);
		Beep(196,200);
		Beep(293,200);
		Beep(392,600);
		Beep(100,200);
		Beep(196,200);
		Beep(293,200);
		Beep(329,300);
		Beep(100,100);
		Beep(196,200);
		Beep(293,300);
		Beep(329,800);
		Beep(196,200);
		Beep(293,200);
		Beep(392,300);
		Beep(196,200);
		Beep(293,200);
		Beep(392,600);
		Beep(100,200);
		Beep(196,200);
		Beep(293,200);
		Beep(329,300);
		Beep(100,100);
		Beep(196,200);
		Beep(293,300);
		Beep(329,800);
		Beep(50,30);
		Beep(196,400);
		Beep(220,200);
		Beep(246,400);
		Beep(50,30);
		Beep(246,300);
		Beep(50,30);
		Beep(220,200);
		Beep(196,200);
		Beep(220,700);
		Beep(196,800);
		Beep(50,30);
		Beep(196,200);
		Beep(220,400);
		Beep(246,400);
		Beep(50,30);
		Beep(246,1000);
		Beep(50,30);
		Beep(196,400);
		Beep(220,200);
		Beep(246,400);
		Beep(50,30);
		Beep(246,300);
		Beep(50,30);
		Beep(220,200);
		Beep(196,200);
		Beep(220,700);
		Beep(196,800);
		Beep(50,30);
		Beep(196,200);
		Beep(50,30);
		Beep(196,500);
		Beep(220,400);
		Beep(50,30);
		Beep(220,1000);
		Beep(50,30);
		Beep(50,30);
		Beep(196,400);
		Beep(220,200);
		Beep(246,400);
		Beep(50,30);
		Beep(246,300);
		Beep(50,30);
		Beep(220,200);
		Beep(196,200);
		Beep(220,700);
		Beep(196,800);
		Beep(50,30);
		Beep(196,200);
		Beep(220,400);
		Beep(246,400);
		Beep(50,30);
		Beep(246,1000);
		Beep(50,30);
		Beep(196,400);
		Beep(220,200);
		Beep(246,400);
		Beep(50,30);
		Beep(246,300);
		Beep(50,30);
		Beep(220,200);
		Beep(196,200);
		Beep(220,700);
		Beep(196,800);
		Beep(50,30);
		Beep(196,200);
		Beep(50,30);
		Beep(196,500);
		Beep(220,400);
		Beep(50,30);
		Beep(220,1000);
		Beep(50,30);
		Beep(50,30);
		Beep(196,600);
		Beep(220,300);
		Beep(50,30);
		Beep(220,300);
		Beep(220,800);
		Beep(50,30);
		Beep(196,2000);
		Beep(50,30);
		Beep(190,10);
		Beep(196,1500);
		Beep(258,200);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(293,700);
		Beep(329,500);
		Beep(293,200);
		Beep(329,500);
		Beep(258,200);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(261,400);
		Beep(50,30);
		Beep(293,700);
		Beep(329,500);
		Beep(293,200);
		Beep(329,500);
		Beep(50,30);
		Beep(196,600);
		Beep(220,300);
		Beep(50,30);
		Beep(220,300);
		Beep(220,800);
		Beep(50,30);
		Beep(196,2000);
		Beep(50,30);
		Beep(190,10);
		Beep(196,1500);
	}
}
void FO(void){
	while (1)
	{
		int n=1;
		while(n <=2){
			Beep(293,250);
			Beep(293,250);
			Beep(220,250);
			Beep(220,250);
			Beep(293,250);
			Beep(293,250);
			Beep(330,250);
			Beep(330,250);
			Beep(349,250);
			Beep(349,250);
			Beep(330,250);
			Beep(330,250);
			Beep(293,250);
			Beep(293,250);
			Beep(330,250);
			Beep(262,250);
			Beep(262,250);
			Beep(196,250);
			Beep(196,250);
			Beep(262,250);
			Beep(262,250);
			Beep(293,250);
			Beep(293,250);
			Beep(330,250);
			Beep(330,250);
			Beep(293,250);
			Beep(262,250);
			Beep(262,250);
			Beep(330,250);
			Beep(262,250);
			n++;
		}
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(220,1.33),250);
		Beep(divs(220,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(349,1.33),250);
		Beep(divs(349,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(196,1.33),250);
		Beep(divs(196,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(262,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(220,1.33),250);
		Beep(divs(220,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(349,1.33),250);
		Beep(divs(349,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(divs(330,1.33),250);
		Beep(divs(293,1.33),250);
		Beep(175,250);
		Beep(175,250);
		Beep(131,250);
		Beep(131,250);
		Beep(175,250);
		Beep(175,250);
		Beep(175,250);
		Beep(196,250);
		Beep(196,250);
		Beep(220,250);
		Beep(220,250);
		Beep(196,250);
		Beep(196,250);
		Beep(175,250);
		Beep(175,250);
		Beep(220,500);
		Beep(175,500);
	}
}
void mudaMus(SHORT *L, SHORT *A, long unsigned int *Mus, HANDLE *MA,int *estA){
	Errou:
	system("cls");
	Barra(L,A);
	int s,esc,x;
	char m[100]="Musicas Disponiveis";
	s=strlen(m);
	CasaAL(0.3*(*A)-2,*L/2-s/2);
	printf("%s",m);
	switch(*estA){
		case 5:
			sprintf(m,"5 - Harvester of Sorrow");
			s=strlen(m);
			CasaAL(0.3*(*A)+4,*L/2-s/2);
			printf("%s",m);
		case 4:
			sprintf(m,"4 - Musica Legal");
			s=strlen(m);
			CasaAL(0.3*(*A)+3,*L/2-s/2);
			printf("%s",m);
		case 3:
			sprintf(m,"3 - Linus and Lucy");
			s=strlen(m);
			CasaAL(0.3*(*A)+2,*L/2-s/2);
			printf("%s",m);
		case 2:
			sprintf(m,"2 - Fear of the dark");
			s=strlen(m);
			CasaAL(0.3*(*A)+1,*L/2-s/2);
			printf("%s",m);
		case 1:
			sprintf(m,"1 - Mario Bross");
			s=strlen(m);
			CasaAL(0.3*(*A),*L/2-s/2);
			printf("%s",m);

	}
	sprintf(m,"%d - Desativar musica",*estA+1);
	s=strlen(m);
	CasaAL(0.3*(*A)+*estA,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"Escolha a musica desejada");
	s=strlen(m);
	CasaAL(0.3*(*A)+*estA+2,*L/2-s/2);
	sprintf(m,"-1 para voltar ao menu");
	s=strlen(m);
	CasaAL(0.3*(*A)+*estA+3,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.3*(*A)+*estA+5,*L/2);
	fflush(stdin);
	scanf("%d",&esc);
	if (esc>0&&esc<=*estA+1){
		SuspendThread(*MA);
		Sleep(600);
		if (esc!=*estA+1){
			switch(esc){
				case 1:
					*MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)mario,NULL,0,Mus);
				break;
				case 2:
					*MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)FO,NULL,0,Mus);
				break;
				case 3:
					*MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)CB,NULL,0,Mus);
				break;
				case 4:
					*MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)Musi,NULL,0,Mus);
				break;
				case 5:
					*MA=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)Metal,NULL,0,Mus);
				break;
			}
		}

	}
	else
	{
		if (esc!=-1){
			system("cls");
			Barra(L,A);
			sprintf(m,"Musica Invalida");
			s=strlen(m);
			CasaAL(0.3*(*A)-2,*L/2-s/2);
			printf("%s",m);
			CasaAL(0.3*(*A),*L/2);
			getch();
			goto Errou;
		}
	}
}
void Carta1(int *x){
	switch(*x){
  case 1:
  printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
  break;
 case 2:
 printf("%c        %c\n",186,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,226,226,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,140,140,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,200,205,205,188,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void CartaV(int *x){
	switch(*x){
		case 1:
			printf("%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,187);
		break;
		case 2:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 3:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 4:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 5:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 6:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 7:
			printf("%c%c%c%c%c%c%c%c%c%c",186,177,177,177,177,177,177,177,177,186);
		break;
		case 8:
			printf("%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,188);
		break;
	}
}
void Carta2(int *x){
	  switch(*x){
 case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,79,79,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,40,41,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,196,196,196,196,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	 }
}
void Carta3(int *x){
	switch(*x){
 case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,205,205,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,72,72,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,236,236,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,205,205,205,205,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
}
}
void Carta4(int *x){
	switch(*x){
case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,205,205,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,232,232,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,42,42,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,246,246,246,246,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta5(int *x){
	switch(*x){
	case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,174,174,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,248,248,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,118,118,118,118,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta6(int *x){
	switch(*x){
case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,35,35,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,193,193,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,239,239,239,239,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta7(int *x){
	switch(*x){
 case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,240,240,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,254,254,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,98,98,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,95,95,95,95,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta8(int *x){
	switch(*x){
case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,156,156,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,222,222,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,95,95,95,95,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta9(int *x){
	switch(*x){
		case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,233,233,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,186,186,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,251,251,251,251,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void Carta10(int *x){
	switch(*x){
 case 1:
 printf("%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,187);
 break;
 case 2:
 printf("%c  %c  %c  %c\n",186,126,126,186);
 break;
 case 3:
 printf("%c  %c  %c  %c\n",186,36,36,186);
 break;
 case 4:
 printf("%c        %c\n",186,186);
 break;
 case 5:
 printf("%c   %c%c   %c\n",186,48,48,186);
 break;
 case 6:
 printf("%c        %c\n",186,186);
 break;
 case 7:
 printf("%c  %c%c%c%c  %c\n",186,207,207,207,207,186);
 break;
 case 8:
 printf("%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,205,205,205,205,205,188);
 break;
	}
}
void N2(SHORT *L,SHORT *A,int **Mat){
	int x=0,tentativas=0,acertos=0;
	Mat=(int**)malloc(sizeof(int*)*2);
	for (x=0;x<2;x++){
		Mat[x]=(int*)malloc(sizeof(int)*3);
	}
	srand(time(NULL));
	int vet[3];
	vet[0]=rand()%10+1;
	do{
		vet[1]=rand()%10+1;
	}while(vet[1]==vet[0]);
	do{
		vet[2]=rand()%10+1;
	}while(vet[2]==vet[0]||vet[2]==vet[1]);

	int a=0,b=0,c=0,vet2[3]={0};
	do{
		Mat[a][b]=rand()%10+1;
		if(vet[0]== Mat[a][b] && vet2[0] < 2){
			vet2[0]++;
			b++;
			c++;
		}else
		{
			if(vet[1]==Mat[a][b] && vet2[1] < 2){
				vet2[1]++;
				b++;
				c++;
			}
			else
			{
				if(vet[2]==Mat[a][b]&&vet2[2]<2){
					vet2[2]++;
					b++;
					c++;
				}
			}
		}
		if (b>=3){
			b=0;
			a++;
		}
	}	while(c<6);
	system("cls");
	Barra(L,A);
	char m[100];
	int s,linha,coluna,y,linha2,coluna2,cont=0;
		sprintf(m,"Nome do Jogador :");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("          ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	fflush(stdin);
	char nome[20];
	scanf("%s",&nome);
	printf("                           ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("                           ");
	sprintf(m,"Nivel de dificuldade 2");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	c=0;
	for(x=0;x<9;x++){
		D13
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		D14
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		D15
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		D23
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		D24
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		D25
		CartaV(&x);
	}
	do{
		linha=0;
		coluna=0;
		linha2=0;
		coluna2=0;
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("          ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha);
		}while(linha<1||linha>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna);
		}while(coluna<1||coluna>3);

		for(y=0;y<6;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						D13
					break;
					case 1:
						D14
					break;
					case 2:
						D15
					break;
					case 3:
						D23
					break;
					case 4:
						D24
					break;
					case 5:
						D25
					break;

				}
				if(Mat[y/3][y%3]!=-1){
					if (y/3+1 == linha && y%3+1 == coluna){
						Sleep(40);
						switch(Mat[linha-1][coluna-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						CartaV(&x);

					}
				}
			}
		}
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha2);
		}while(linha2<1||linha2>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna2);
		}while(coluna2<1||coluna2>3);

		for(y=0;y<6;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						D13
					break;
					case 1:
						D14
					break;
					case 2:
						D15
					break;
					case 3:
						D23
					break;
					case 4:
						D24
					break;
					case 5:
						D25
					break;

				}
				if(Mat[y/3][y%3]!=-1){
					if (y/3+1 == linha2 && y%3+1 == coluna2){
						Sleep(40);
						switch(Mat[linha2-1][coluna2-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						if(!(y/3+1 == linha && y%3+1 == coluna)){

							CartaV(&x);
						}
					}
				}
			}
		}
		if ((Mat[linha-1][coluna-1])==(Mat[linha2-1][coluna2-1]) && (linha != linha2 || coluna != coluna2) && ((Mat[linha-1][coluna-1]!=-1)&&(Mat[linha2-1][coluna2-1]!=-1))){
			Mat[linha-1][coluna-1]=-1;
			Mat[linha2-1][coluna2-1]=-1;
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ACERTO MIZERAVI            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
			cont++;
		}
		else
		{
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ERROOU            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
		}
		CasaAL(0.25*(*A)+1,*L/2);
		printf("  ");
		CasaAL(0.25*(*A)+1,*L/2);
		tecla(L,A);
		fflush(stdin);
		CasaAL(0.25*(*A)+1,*L/2);
		getch();
		fflush(stdin);
		Ltecla(L,A);
		if (cont<4){
			for(y=0;y<6;y++){
				for (x=0;x<9;x++){
					switch(y){
						case 0:
							D13
						break;
						case 1:
							D14
						break;
						case 2:
							D15
						break;
						case 3:
							D23
						break;
						case 4:
							D24
						break;
						case 5:
							D25
						break;
					}
					if(Mat[y/3][y%3]!=-1){

						if ((y/3+1 == linha2 && y%3+1 == coluna2) || (y/3+1 == linha && y%3+1 == coluna)){
							Sleep(40);
						}
							CartaV(&x);
					}
					else
					{
						if ((y/3+1 == linha2 && y%3+1 == coluna2) || (y/3+1 == linha && y%3+1 == coluna)){
							Sleep(40);
						}
						printf("          ");
					}
				}
			}
		}
	CasaAL(0.25*(*A)+1,*L/2);
	printf("  ");
	CasaAL(0.25*(*A)+1,*L/2);
	tentativas++;
	}while(cont<3);
	acertos=3;
	CasaAL(0.25*(*A),*L-15);
	sprintf(m,"            Desbloqueou nivel 3 e uma nova musica            ");
	s=strlen(m);
	CasaAL(0.25*(*A),*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	struct tm *Data;
	time_t Tempo;
	Tempo=time(NULL);
	Data=localtime(&Tempo);
	fflush(stdin);
	FILE* Arq=fopen("Nivel2.txt","a");
	fprintf(Arq,"%d/%d/%d - %d:%d\nJogador %s fez %d Acertos com %d Tentativas\n",(*Data).tm_mday,(*Data).tm_mon+1,(*Data).tm_year+1900,(*Data).tm_hour,(*Data).tm_min,nome,acertos,tentativas);
	fclose(Arq);
	CasaAL(0.25*(*A)+1,*L/2);
	getch();
	fflush(stdin);
	Ltecla(L,A);
	for(x=0;x<2;x++){
		free(Mat[x]);
	}
	free(Mat);


}
void N3(SHORT *L,SHORT *A,int **Mat){
	int x=0,tentativas=0,acertos=0;
	Mat=(int**)malloc(sizeof(int*)*2);
	for (x=0;x<2;x++){
		Mat[x]=(int*)malloc(sizeof(int)*4);
	}
	srand(time(NULL));
	int vet[4];
	vet[0]=rand()%10+1;
	do{
		vet[1]=rand()%10+1;
	}while(vet[1]==vet[0]);
	do{
		vet[2]=rand()%10+1;
	}while(vet[2]==vet[0]||vet[2]==vet[1]);
	do{
		vet[3]=rand()%10+1;
	}while(vet[3]==vet[0]||vet[3]==vet[1]||vet[3]==vet[2]);
	int a=0,b=0,c=0,vet2[4]={0};
	do{
		Mat[a][b]=rand()%10+1;
		if(vet[0]== Mat[a][b] && vet2[0] < 2){
			vet2[0]++;
			b++;
			c++;
		}else
		{
			if(vet[1]==Mat[a][b] && vet2[1] < 2){
				vet2[1]++;
				b++;
				c++;
			}
			else
			{
				if(vet[2]==Mat[a][b]&&vet2[2]<2){
					vet2[2]++;
					b++;
					c++;
				}
				else
				{
					if(vet[3]==Mat[a][b]&&vet2[3]<2){
						vet2[3]++;
						b++;
						c++;
					}
				}
			}
		}
		if (b>=4){
			b=0;
			a++;
		}
	}	while(c<8);
	system("cls");
	Barra(L,A);
	char m[100];
	int s,linha,coluna,y,linha2,coluna2,cont=0;
	sprintf(m,"Nome do Jogador :");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("          ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	fflush(stdin);
	char nome[20];
	scanf("%s",&nome);
	printf("                           ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("                           ");
	sprintf(m,"Nivel de dificuldade 3");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	c=0;
	for(x=0;x<9;x++){
		E13
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E14
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E15
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E16
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E23
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E24
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E25
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		E26
		CartaV(&x);
	}
	do{
		linha=0;
		coluna=0;
		linha2=0;
		coluna2=0;
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("          ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha);
		}while(linha<1||linha>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna);
		}while(coluna<1||coluna>4);

		for(y=0;y<8;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						E13
					break;
					case 1:
						E14
					break;
					case 2:
						E15
					break;
					case 3:
						E16
					break;
					case 4:
						E23
					break;
					case 5:
						E24
					break;
					case 6:
						E25
					break;
					case 7:
						E26
					break;

				}
				if(Mat[y/4][y%4]!=-1){
					if (y/4+1 == linha && y%4+1 == coluna){
						Sleep(40);
						switch(Mat[linha-1][coluna-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						CartaV(&x);

					}
				}
			}
		}
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha2);
		}while(linha2<1||linha2>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna2);
		}while(coluna2<1||coluna2>4);

		for(y=0;y<8;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						E13
					break;
					case 1:
						E14
					break;
					case 2:
						E15
					break;
					case 3:
						E16
					break;
					case 4:
						E23
					break;
					case 5:
						E24
					break;
					case 6:
						E25
					break;
					case 7:
						E26
					break;
				}
				if(Mat[y/4][y%4]!=-1){
					if (y/4+1 == linha2 && y%4+1 == coluna2){
						Sleep(40);
						switch(Mat[linha2-1][coluna2-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						if(!(y/4+1 == linha && y%4+1 == coluna)){

							CartaV(&x);
						}
					}
				}
			}
		}
		if ((Mat[linha-1][coluna-1])==(Mat[linha2-1][coluna2-1]) && (linha != linha2 || coluna != coluna2) && ((Mat[linha-1][coluna-1]!=-1)&&(Mat[linha2-1][coluna2-1]!=-1))){
			Mat[linha-1][coluna-1]=-1;
			Mat[linha2-1][coluna2-1]=-1;
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ACERTO MIZERAVI            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
			cont++;
		}
		else
		{
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ERROOU            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
		}
		CasaAL(0.25*(*A)+1,*L/2);
		printf("  ");
		CasaAL(0.25*(*A)+1,*L/2);
		tecla(L,A);
		fflush(stdin);
		CasaAL(0.25*(*A)+1,*L/2);
		getch();
		fflush(stdin);
		Ltecla(L,A);
		if (cont<5){
			for(y=0;y<8;y++){
				for (x=0;x<9;x++){
					switch(y){
					case 0:
						E13
					break;
					case 1:
						E14
					break;
					case 2:
						E15
					break;
					case 3:
						E16
					break;
					case 4:
						E23
					break;
					case 5:
						E24
					break;
					case 6:
						E25
					break;
					case 7:
						E26
					break;
					}
					if(Mat[y/4][y%4]!=-1){

						if ((y/4+1 == linha2 && y%4+1 == coluna2) || (y/4+1 == linha && y%4+1 == coluna)){
							Sleep(40);
						}
							CartaV(&x);
					}
					else
					{
						if ((y/4+1 == linha2 && y%4+1 == coluna2) || (y/4+1 == linha && y%4+1 == coluna)){
							Sleep(40);
						}
						printf("          ");
					}
				}
			}
		}
	CasaAL(0.25*(*A)+1,*L/2);
	printf("  ");
	CasaAL(0.25*(*A)+1,*L/2);
	tentativas++;
	}while(cont<4);
	acertos=4;
	CasaAL(0.25*(*A),*L-15);
	sprintf(m,"            Desbloqueou nivel 4 e uma nova musica            ");
	s=strlen(m);
	CasaAL(0.25*(*A),*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	struct tm *Data;
	time_t Tempo;
	Tempo=time(NULL);
	Data=localtime(&Tempo);
	fflush(stdin);
	FILE* Arq=fopen("Nivel3.txt","a");
	fprintf(Arq,"%d/%d/%d - %d:%d\nJogador %s fez %d Acertos com %d Tentativas\n",(*Data).tm_mday,(*Data).tm_mon+1,(*Data).tm_year+1900,(*Data).tm_hour,(*Data).tm_min,nome,acertos,tentativas);
	fclose(Arq);
	CasaAL(0.25*(*A)+1,*L/2);
	getch();
	fflush(stdin);
	Ltecla(L,A);
	for(x=0;x<2;x++){
		free(Mat[x]);
	}
	free(Mat);


}
void N4(SHORT *L,SHORT *A,int **Mat){
	int x=0,tentativas=0,acertos=0;
	Mat=(int**)malloc(sizeof(int*)*2);
	for (x=0;x<2;x++){
		Mat[x]=(int*)malloc(sizeof(int)*5);
	}
	srand(time(NULL));
	int vet[5];
	vet[0]=rand()%10+1;
	do{
		vet[1]=rand()%10+1;
	}while(vet[1]==vet[0]);
	do{
		vet[2]=rand()%10+1;
	}while(vet[2]==vet[0]||vet[2]==vet[1]);
	do{
		vet[3]=rand()%10+1;
	}while(vet[3]==vet[0]||vet[3]==vet[1]||vet[3]==vet[2]);
	do{
		vet[4]=rand()%10+1;
	}while(vet[4]==vet[0]||vet[4]==vet[1]||vet[4]==vet[2]||vet[4]==vet[3]);
	int a=0,b=0,c=0,vet2[5]={0};
	do{
		Mat[a][b]=rand()%10+1;
		if(vet[0]== Mat[a][b] && vet2[0] < 2){
			vet2[0]++;
			b++;
			c++;
		}else
		{
			if(vet[1]==Mat[a][b] && vet2[1] < 2){
				vet2[1]++;
				b++;
				c++;
			}
			else
			{
				if(vet[2]==Mat[a][b]&&vet2[2]<2){
					vet2[2]++;
					b++;
					c++;
				}
				else
				{
					if(vet[3]==Mat[a][b]&&vet2[3]<2){
						vet2[3]++;
						b++;
						c++;
					}
					else
					{
						if(vet[4]==Mat[a][b]&&vet2[4]<2){
							vet2[4]++;
							b++;
							c++;
						}
					}
				}
			}
		}
		if (b>=5){
			b=0;
			a++;
		}
	}	while(c<10);
	system("cls");
	Barra(L,A);
	char m[100];
	int s,linha,coluna,y,linha2,coluna2,cont=0;
	sprintf(m,"Nome do Jogador :");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("          ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	fflush(stdin);
	char nome[20];
	scanf("%s",&nome);
	printf("                           ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("                           ");
	sprintf(m,"Nivel de dificuldade 4");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	c=0;
	for(x=0;x<9;x++){
		F12
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F13
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F14
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F15
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F16
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F22
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F23
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F24
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F25
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		F26
		CartaV(&x);
	}
	do{
		linha=0;
		coluna=0;
		linha2=0;
		coluna2=0;
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("          ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha);
		}while(linha<1||linha>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna);
		}while(coluna<1||coluna>5);

		for(y=0;y<10;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						F12
					break;
					case 1:
						F13
					break;
					case 2:
						F14
					break;
					case 3:
						F15
					break;
					case 4:
						F16
					break;
					case 5:
						F22
					break;
					case 6:
						F23
					break;
					case 7:
						F24
					break;
					case 8:
						F25
					break;
					case 9:
						F26
					break;

				}
				if(Mat[y/5][y%5]!=-1){
					if (y/5+1 == linha && y%5+1 == coluna){
						Sleep(40);
						switch(Mat[linha-1][coluna-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						CartaV(&x);

					}
				}
			}
		}
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha2);
		}while(linha2<1||linha2>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna2);
		}while(coluna2<1||coluna2>5);

		for(y=0;y<10;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						F12
					break;
					case 1:
						F13
					break;
					case 2:
						F14
					break;
					case 3:
						F15
					break;
					case 4:
						F16
					break;
					case 5:
						F22
					break;
					case 6:
						F23
					break;
					case 7:
						F24
					break;
					case 8:
						F25
					break;
					case 9:
						F26
					break;
				}
				if(Mat[y/5][y%5]!=-1){
					if (y/5+1 == linha2 && y%5+1 == coluna2){
						Sleep(40);
						switch(Mat[linha2-1][coluna2-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
						}
					}
					else
					{
						if(!(y/5+1 == linha && y%5+1 == coluna)){

							CartaV(&x);
						}
					}
				}
			}
		}
		if ((Mat[linha-1][coluna-1])==(Mat[linha2-1][coluna2-1]) && (linha != linha2 || coluna != coluna2) && ((Mat[linha-1][coluna-1]!=-1)&&(Mat[linha2-1][coluna2-1]!=-1))){
			Mat[linha-1][coluna-1]=-1;
			Mat[linha2-1][coluna2-1]=-1;
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ACERTO MIZERAVI            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
			cont++;
		}
		else
		{
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ERROOU            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
		}
		CasaAL(0.25*(*A)+1,*L/2);
		printf("  ");
		CasaAL(0.25*(*A)+1,*L/2);
		tecla(L,A);
		fflush(stdin);
		CasaAL(0.25*(*A)+1,*L/2);
		getch();
		fflush(stdin);
		Ltecla(L,A);
		if (cont<6){
			for(y=0;y<10;y++){
				for (x=0;x<9;x++){
					switch(y){
						case 0:
							F12
						break;
						case 1:
							F13
						break;
						case 2:
							F14
						break;
						case 3:
							F15
						break;
						case 4:
							F16
						break;
						case 5:
							F22
						break;
						case 6:
							F23
						break;
						case 7:
							F24
						break;
						case 8:
							F25
						break;
						case 9:
							F26
						break;
					}
					if(Mat[y/5][y%5]!=-1){

						if ((y/5+1 == linha2 && y%5+1 == coluna2) || (y/5+1 == linha && y%5+1 == coluna)){
							Sleep(40);
						}
							CartaV(&x);
					}
					else
					{
						if ((y/5+1 == linha2 && y%5+1 == coluna2) || (y/5+1 == linha && y%5+1 == coluna)){
							Sleep(40);
						}
						printf("          ");
					}
				}
			}
		}
	CasaAL(0.25*(*A)+1,*L/2);
	printf("  ");
	CasaAL(0.25*(*A)+1,*L/2);
	tentativas++;
	}while(cont<5);
	acertos=5;
	CasaAL(0.25*(*A),*L-15);
	sprintf(m,"            Desbloqueou nivel 5 e uma nova musica            ");
	s=strlen(m);
	CasaAL(0.25*(*A),*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	struct tm *Data;
	time_t Tempo;
	Tempo=time(NULL);
	Data=localtime(&Tempo);
	fflush(stdin);
	FILE* Arq=fopen("Nivel4.txt","a");
	fprintf(Arq,"%d/%d/%d - %d:%d\nJogador %s fez %d Acertos com %d Tentativas\n",(*Data).tm_mday,(*Data).tm_mon+1,(*Data).tm_year+1900,(*Data).tm_hour,(*Data).tm_min,nome,acertos,tentativas);
	fclose(Arq);
	CasaAL(0.25*(*A)+1,*L/2);
	getch();
	fflush(stdin);
	Ltecla(L,A);
	for(x=0;x<2;x++){
		free(Mat[x]);
	}
	free(Mat);
}
void N5(SHORT *L,SHORT *A,int **Mat){
	int x=0,tentativas=0,acertos=0;
	Mat=(int**)malloc(sizeof(int*)*2);
	for (x=0;x<2;x++){
		Mat[x]=(int*)malloc(sizeof(int)*6);
	}
	srand(time(NULL));
	int vet[5];
	vet[0]=rand()%14+1;
	do{
		vet[1]=rand()%14+1;
	}while(vet[1]==vet[0]);
	do{
		vet[2]=rand()%14+1;
	}while(vet[2]==vet[0]||vet[2]==vet[1]);
	do{
		vet[3]=rand()%14+1;
	}while(vet[3]==vet[0]||vet[3]==vet[1]||vet[3]==vet[2]);
	do{
		vet[4]=rand()%14+1;
	}while(vet[4]==vet[0]||vet[4]==vet[1]||vet[4]==vet[2]||vet[4]==vet[3]);
	do{
		vet[5]=rand()%14+1;
	}while(vet[5]==vet[0]||vet[5]==vet[1]||vet[5]==vet[2]||vet[5]==vet[3]||vet[5]==vet[4]);

	int a=0,b=0,c=0,vet2[6]={0};

	do{
		Mat[a][b]=rand()%14+1;
		if(vet[0]== Mat[a][b] && vet2[0] < 2){
			vet2[0]++;
			b++;
			c++;
		}else
		{
			if(vet[1]==Mat[a][b] && vet2[1] < 2){
				vet2[1]++;
				b++;
				c++;
			}
			else
			{
				if(vet[2]==Mat[a][b]&&vet2[2]<2){
					vet2[2]++;
					b++;
					c++;
				}
				else
				{
					if(vet[3]==Mat[a][b]&&vet2[3]<2){
						vet2[3]++;
						b++;
						c++;
					}
					else
					{
						if(vet[4]==Mat[a][b]&&vet2[4]<2){
							vet2[4]++;
							b++;
							c++;
						}
						else
						{
							if(vet[5]==Mat[a][b]&&vet2[5]<2){
								vet2[5]++;
								b++;
								c++;
							}
						}
					}
				}
			}
		}
		if (b>=6){
			b=0;
			a++;
		}
	}	while(c<12);
	system("cls");
	Barra(L,A);
	char m[100];
	int s,linha,coluna,y,linha2,coluna2,cont=0;
	sprintf(m,"Nome do Jogador :");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("          ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	fflush(stdin);
	char nome[20];
	scanf("%s",&nome);
	printf("                           ");
	CasaAL(0.25*(*A)+1,*L/2-3);
	printf("                           ");
	sprintf(m,"Nivel de dificuldade 5");
	s=strlen(m);
	CasaAL(0.25*(*A)-2,*L/2-s/2);
	printf("%s",m);
	c=0;
	for(x=0;x<9;x++){
		G12
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G13
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G14
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G15
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G16
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G17
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G22
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G23
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G24
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G25
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G26
		CartaV(&x);
	}
	for(x=0;x<9;x++){
		G27
		CartaV(&x);
	}
	do{
		linha=0;
		coluna=0;
		linha2=0;
		coluna2=0;
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("          ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha);
		}while(linha<1||linha>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna);
		}while(coluna<1||coluna>6);

		for(y=0;y<12;y++){
			for (x=0;x<9;x++){
				switch(y){
					case 0:
						G12
					break;
					case 1:
						G13
					break;
					case 2:
						G14
					break;
					case 3:
						G15
					break;
					case 4:
						G16
					break;
					case 5:
						G17
					break;
					case 6:
						G22
					break;
					case 7:
						G23
					break;
					case 8:
						G24
					break;
					case 9:
						G25
					break;
					case 10:
						G26
					break;
					case 11:
						G27
					break;

				}
				if(Mat[y/6][y%6]!=-1){
					if (y/6+1 == linha && y%6+1 == coluna){
						Sleep(40);
						switch(Mat[linha-1][coluna-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
							case 11:
								Carta11(&x);
							break;
							case 12:
								Carta12(&x);
							break;
							case 13:
								Carta13(&x);
							break;
							case 14:
								Carta14(&x);
							break;
						}
					}
					else
					{
						CartaV(&x);

					}
				}
			}
		}
		sprintf(m,"Escolha uma linha ");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&linha2);
		}while(linha2<1||linha2>2);
		sprintf(m,"Escolha uma coluna");
		s=strlen(m);
		CasaAL(0.25*(*A),*L/2-s/2);
		printf("%s",m);
		do{
			CasaAL(0.25*(*A)+1,*L/2);
			printf("  ");
			CasaAL(0.25*(*A)+1,*L/2);
			fflush(stdin);
			scanf("%d",&coluna2);
		}while(coluna2<1||coluna2>6);

		for(y=0;y<12;y++){
			for (x=0;x<9;x++){
				switch(y){

					case 0:
						G12
					break;
					case 1:
						G13
					break;
					case 2:
						G14
					break;
					case 3:
						G15
					break;
					case 4:
						G16
					break;
					case 5:
						G17
					break;
					case 6:
						G22
					break;
					case 7:
						G23
					break;
					case 8:
						G24
					break;
					case 9:
						G25
					break;
					case 10:
						G26
					break;
					case 11:
						G27
					break;
				}
				if(Mat[y/6][y%6]!=-1){
					if (y/6+1 == linha2 && y%6+1 == coluna2){
						Sleep(40);
						switch(Mat[linha2-1][coluna2-1]){
							case 1:
								Carta1(&x);
							break;
							case 2:
								Carta2(&x);
							break;
							case 3:
								Carta3(&x);
							break;
							case 4:
								Carta4(&x);
							break;
							case 5:
								Carta5(&x);
							break;
							case 6:
								Carta6(&x);
							break;
							case 7:
								Carta7(&x);
							break;
							case 8:
								Carta8(&x);
							break;
							case 9:
								Carta9(&x);
							break;
							case 10:
								Carta10(&x);
							break;
							case 11:
								Carta11(&x);
							break;
							case 12:
								Carta12(&x);
							break;
							case 13:
								Carta13(&x);
							break;
							case 14:
								Carta14(&x);
							break;
						}
					}
					else
					{
						if(!(y/6+1 == linha && y%6+1 == coluna)){

							CartaV(&x);
						}
					}
				}
			}
		}
		if ((Mat[linha-1][coluna-1])==(Mat[linha2-1][coluna2-1]) && (linha != linha2 || coluna != coluna2) && ((Mat[linha-1][coluna-1]!=-1)&&(Mat[linha2-1][coluna2-1]!=-1))){
			Mat[linha-1][coluna-1]=-1;
			Mat[linha2-1][coluna2-1]=-1;
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ACERTO MIZERAVI            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
			cont++;
		}
		else
		{
			CasaAL(0.25*(*A),*L-15);
			sprintf(m,"            ERROOU            ");
			s=strlen(m);
			CasaAL(0.25*(*A),*L/2-s/2);
			printf("%s",m);
		}
		CasaAL(0.25*(*A)+1,*L/2);
		printf("  ");
		CasaAL(0.25*(*A)+1,*L/2);
		tecla(L,A);
		fflush(stdin);
		CasaAL(0.25*(*A)+1,*L/2);
		getch();
		fflush(stdin);
		Ltecla(L,A);
		if (cont<7){
			for(y=0;y<12;y++){
				for (x=0;x<9;x++){
					switch(y){

					case 0:
						G12
					break;
					case 1:
						G13
					break;
					case 2:
						G14
					break;
					case 3:
						G15
					break;
					case 4:
						G16
					break;
					case 5:
						G17
					break;
					case 6:
						G22
					break;
					case 7:
						G23
					break;
					case 8:
						G24
					break;
					case 9:
						G25
					break;
					case 10:
						G26
					break;
					case 11:
						G27
					break;
					}
					if(Mat[y/6][y%6]!=-1){

						if ((y/6+1 == linha2 && y%6+1 == coluna2) || (y/6+1 == linha && y%6+1 == coluna)){
							Sleep(40);
						}
							CartaV(&x);
					}
					else
					{
						if ((y/6+1 == linha2 && y%6+1 == coluna2) || (y/6+1 == linha && y%6+1 == coluna)){
							Sleep(40);
						}
						printf("          ");
					}
				}
			}
		}
	CasaAL(0.25*(*A)+1,*L/2);
	printf("  ");
	CasaAL(0.25*(*A)+1,*L/2);
	tentativas++;
	}while(cont<6);
	acertos=6;
	CasaAL(0.25*(*A),*L-15);
	sprintf(m,"            Voce virou o nosso Joguinho!!!!!!!!!!            ");
	s=strlen(m);
	CasaAL(0.25*(*A),*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	struct tm *Data;
	time_t Tempo;
	Tempo=time(NULL);
	Data=localtime(&Tempo);
	fflush(stdin);
	FILE* Arq=fopen("Nivel5.txt","a");
	fprintf(Arq,"%d/%d/%d - %d:%d\nJogador %s fez %d Acertos com %d Tentativas\n",(*Data).tm_mday,(*Data).tm_mon+1,(*Data).tm_year+1900,(*Data).tm_hour,(*Data).tm_min,nome,acertos,tentativas);
	fclose(Arq);
	CasaAL(0.25*(*A)+1,*L/2);
	getch();
	fflush(stdin);
	Ltecla(L,A);
	for(x=0;x<2;x++){
		free(Mat[x]);
	}
	free(Mat);
}
void Tuto(short *L,short *A){
	int s;
	char m[100];
	system("cls");
	Barra(L,A);
	sprintf(m,"Bem-Vindo ao nosso Joguinho!");
	s=strlen(m);
	CasaAL(0.3*(*A)-2,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"Aperte qualquer tecla para iniciar o Tutorial");
	s=strlen(m);
	CasaAL(0.3*(*A),*L/2-s/2);
	printf("%s",m);
	CasaAL(0.3*(*A)+2,*L/2);

	fflush(stdin);
	getch();
	Ltecla(L,A);
	sprintf(m,"            Tutorial            ");
	s=strlen(m);
	CasaAL(0.3*(*A)-2,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"Na sua tela aparecerao duas linhas com cartas e um numero X de colunas");
	s=strlen(m);
	CasaAL(0.3*(*A),*L/2-s/2);
	printf("%s",m);
	sprintf(m,"            Voce devera escolher a linha desejada (1~2) e a coluna (1~X)            ");
	s=strlen(m);
	CasaAL(0.3*(*A)+1,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"          Ao escolher uma carta, voce devera escolher outra a ser virada          ");
	s=strlen(m);
	CasaAL(0.3*(*A)+2,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"            Caso elas sejam iguais, voce recebera um ponto e elas desaparecerao            ");
	s=strlen(m);
	CasaAL(0.3*(*A)+3,*L/2-s/2);
	printf("%s",m);
	sprintf(m,"   Caso sejam diferentes, elas serao viradas e voce devera tentar denovo   ");
	s=strlen(m);
	CasaAL(0.3*(*A)+4,*L/2-s/2);
	printf("%s",m);
	tecla(L,A);
	CasaAL(0.3*(*A)+6,*L/2);
	fflush(stdin);
	getch();
	Ltecla(L,A);

}
void Historico(short *L,short *A){
	char m[100],n1[400],n2[400],n5[400],n3[400],n4[400];
	int x=0,c=0,s,co=0,esc;
	Errou:
	system("cls");
	Barra(L,A);
	FILE *Arq=fopen("Nivel1.txt","r");
	sprintf(m,"Historicos disponiveis");
	s=strlen(m);
	CasaAL(*A*0.3-2,*L/2-s/2);
	printf("%s",m);
	if (Arq==NULL){
		n1[0]='A';
	}
	else
	{
		do{
			n1[x]=fgetc(Arq);
			x++;
		}while(!feof(Arq));
		c++;
	}
	x=0;
	fclose(Arq);
	Arq=fopen("Nivel2.txt","r");
	if (Arq==NULL){
		n2[0]='A';
	}
	else
	{
		do{
			n2[x]=fgetc(Arq);
			x++;
		}while(!feof(Arq));
		c++;
	}
	x=0;
	fclose(Arq);
	Arq=fopen("Nivel3.txt","r");
	if (Arq==NULL){
		n3[0]='A';
	}
	else
	{
		do{
			n3[x]=fgetc(Arq);
			x++;
		}while(!feof(Arq));
		c++;
	}
	x=0;
	fclose(Arq);
	Arq=fopen("Nivel4.txt","r");
	if (Arq==NULL){
		n4[0]='A';
	}
	else
	{
		do{
			n4[x]=fgetc(Arq);
			x++;
		}while(!feof(Arq));
		c++;
	}
	x=0;
	fclose(Arq);
	Arq=fopen("Nivel5.txt","r");
	if (Arq==NULL){
		n5[0]='A';
	}
	else
	{
		do{
			n5[x]=fgetc(Arq);
			x++;
		}while(!feof(Arq));
		c++;
	}
	int l=0;
	if(c%2){//Impar
		CasaAL(0.3*(*A),*L/2-((c/2)*9)-4);
		for (x=1;x<=5;x++){
			switch(x){
				case 1:
					if(n1[0]!='A'){
						printf("Nivel 1  ");
					}
				break;
				case 2:
					if(n2[0]!='A'){
						printf("Nivel 2  ");
					}
				break;
				case 3:
					if(n3[0]!='A'){
						printf("Nivel 3  ");
					}
				break;
				case 4:
					if(n4[0]!='A'){
						printf("Nivel 4  ");
					}
				break;
				case 5:
					if(n5[0]!='A'){
						printf("Nivel 5  ");
					}
				break;
			}
		}
	}
	else
	{//Par
		CasaAL(0.3*(*A),*L/2-(2+(((c/2)-1)*9))-4);
		for (x=1;x<=5;x++){
			switch(x){
				case 1:
					if(n1[0]!='A'){
						printf("Nivel 1  ");
					}
				break;
				case 2:
					if(n2[0]!='A'){
						printf("Nivel 2  ");
					}
				break;
				case 3:
					if(n3[0]!='A'){
						printf("Nivel 3  ");
					}
				break;
				case 4:
					if(n4[0]!='A'){
						printf("Nivel 4  ");
					}
				break;
				case 5:
					if(n5[0]!='A'){
						printf("Nivel 5  ");
					}
				break;
			}
		}
	}
		sprintf(m,"Escolha um nivel");
		CasaAL(0.3*(*A)+2,*L/2-s/2);
		fflush(stdin);
		CasaAL(0.3*(*A)+4,*L/2);
		scanf("%d",&esc);
		switch(esc){
				case 1:
					if(n1[0]=='A'){
						goto Errou;
					}
				break;
				case 2:
					if(n2[0]=='A'){
						goto Errou;
					}
				break;
				case 3:
					if(n3[0]=='A'){
						goto Errou;
					}
				break;
				case 4:
					if(n4[0]=='A'){
						goto Errou;
					}
				break;
				case 5:
					if(n5[0]=='A'){
						goto Errou;
					}
				break;
		}
		system("cls");
		Barra(L,A);
		x=0;
		int lin=0;
		CasaAL(*A*0.3-1,*L*0.2);
			switch(esc){
				case 1:
					while(n1[x]!='\0'){
						if(n1[x]=='\n'){
							lin++;
							CasaAL(*A*0.3-1+lin,*L*0.2);
						}
						else
						{
						printf("%c",n1[x]);

						}
						x++;
					}
				break;
				case 2:
					while(n2[x]!='\0'){
						if(n2[x]=='\n'){
							lin++;
							CasaAL(*A*0.3-1+lin,*L*0.2);
						}
						else
						{

						printf("%c",n2[x]);
						}
						x++;
					}
				break;
				case 3:
					while(n3[x]!='\0'){
						if(n3[x]=='\n'){
							lin++;
							CasaAL(*A*0.3-1+lin,*L*0.2);
						}
						else
						{

						printf("%c",n3[x]);
						}
						x++;
					}
				break;
				case 4:
					while(n4[x]!='\0'){
						if(n4[x]=='\n'){
							lin++;
							CasaAL(*A*0.3-1+lin,*L*0.2);
						}
						else
						{

						printf("%c",n4[x]);
						}
						x++;
					}
				break;
				case 5:
					while(n5[x]!='\0'){
						if(n5[x]=='\n'){
							lin++;
							CasaAL(*A*0.3-1+lin,*L*0.2);
						}
						else
						{

						printf("%c",n5[x]);
						}
						x++;
					}
				break;
		}
		tecla(L,A);
		CasaAL(0.88*(*A)+1,*L/2);
		getch();
		Ltecla(L,A);


}

