#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define tamanio 1000000000

int main(){

	double *arreglo = malloc(tamanio * sizeof(double));
	
	for(int i=0; i < tamanio; i++){
		arreglo[i]= i*0.1;
	}
	
	clock_t inicioEjecucion = clock();
	
	double suma = 0.0;
	for(int i=0; i < tamanio; i++){
		suma += arreglo[i];
	}
	
	clock_t finEjecucion = clock();

	
	printf("La suma de los valores es: %f\n",suma);
	printf("Tiempo serial: %f segundos\n",(double)(finEjecucion-inicioEjecucion)/CLOCKS_PER_SEC);

	free(arreglo);

return 0;
}
