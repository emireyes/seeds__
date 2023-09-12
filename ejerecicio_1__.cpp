#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 int main (){
 	
 	int numNumeroAleatorio=5;
 	int suma=0;
 	int contador=0;
	srand(time(NULL));
	do {
		int numeroAleatorio=rand ()%100;
		suma +=numeroAleatorio;
		contador++;
		printf ("numero Aleatorio %d:%d\n", contador,numeroAleatorio);
	} while (contador<numNumeroAleatorio);
	printf ("la suma de %d numeros aleatorios es. %d\n",numNumeroAleatorio, suma);


return 0;
 }
 
 
 
 
