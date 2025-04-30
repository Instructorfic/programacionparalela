/*
OBJETIVO: 
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 09/04/2925
*/

#include <stdio.h>
#include <unistd.h>

int main(){

	printf("El ID de este proceso es %d\n",(int) getpid());
	printf("El ID del padre de este proceso es: %d\n",(int) getppid());
	//scanf("%",&);

	return 0;
}
