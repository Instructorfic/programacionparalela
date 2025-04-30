#include <stdio.h>
#include <omp.h>

int main(){
	printf("Hola mundo\n");

	omp_set_num_threads(4);
	int num_hilos = omp_get_num_procs();
	#pragma omp parallel
	{
		int hilo = omp_get_thread_num();
		printf("Hola desde el hilo %d de un total de %d hilos.\n",hilo,num_hilos);
	}

	return 0;
}
