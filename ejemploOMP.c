// 07/Mayo/2025

#include <stdio.h>
#include <omp.h>

int main() { //( int argc, char * argv[])
	printf("Hola mundo \n");

	omp_set_num_threads(4); //Establece la cantidad de hilos a imprimir
	#pragma omp parallel
	{
	printf("Hola desde el hilo \n");
	}
return 0;
}
