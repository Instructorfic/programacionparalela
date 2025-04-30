/*
OBJETIVO: 
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 09/04/2025
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

	printf("El ID de este proceso es %d\n",(int) getpid());
	printf("El ID del padre de este proceso es: %d\n",(int) getppid());

	system("ls -l");
	system("top");
	//printf("");
	//scanf("%",&);

	return 0;
}
