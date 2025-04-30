#include<stdio.h>
#include<omp.h>
int main(int argc, char * argv[] ) {
	printf("Hola mundo \n");
	int total=3;
	omp_set_num_threads(total);

	#pragma omp parallel 
	{
	int hilo = omp_get_thread_num();
		printf("Hola desde el hilo,%d",hilo); 
		printf("\n");
	}
	printf("\n Total hilos: %d",total);
	return 0;
}
