#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int a=0;
	int numeroAleatorio = rand ()%6;
	srand(time(NULL));
	while(a<=10){
		numeroAleatorio=rand()%6;
		printf("numero aleatorio:%d\n",numeroAleatorio);
	a++;
	}
	
	return 0 ;
	
}

