#include <stdio.h>
#include <omp.h>

int main(){
	printf("Hola Mundo\n");
	int total_hilos=omp_get_num_threads();
	#pragma omp parallel
	{
		int hilo=omp_get_thread_num();
		printf("Hola desde el hilo: %d\n",hilo);
	}

	printf("Total de hilos: %d\n",total_hilos);
	return 0;
}
