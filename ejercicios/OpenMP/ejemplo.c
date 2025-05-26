#include <stdio.h>
#include <omp.h>

int main (){
	int x;
	scanf("%d",&x);

	omp_set_num_threads(x);
	#pragma omp parallel
	{
		int hilo = omp_get_thread_num();
		printf("Hola desde el hilo %d\n",hilo);
	}
	return 0;
}
