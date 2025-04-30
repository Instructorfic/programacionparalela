#include <stdio.h>
#include <omp.h>

int main(){
	printf("Hola mundo\n");
	omp_set_num_threads(5);
	#pragma omp parallel
	{
		printf("Hola desde el hilo \n");
	}
return 0;
}
