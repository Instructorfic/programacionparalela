#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define tamanio 1000

int main(){

	double *arreglo = malloc(tamanio * sizeof(double));
	
	for(int i=0; i < tamanio; i++){
		arreglo[i]= i*0.1;
	}
	
	double inicioEjecucion = omp_get_wtime();
	
	double suma = 0.0;

	#pragma omp parallel for reduction(+:suma)
	for(int i=0; i < tamanio; i++){
		suma += arreglo[i];
	}
	
	double finEjecucion = omp_get_wtime();

	
	printf("La suma de los valores es: %f\n",suma);
	printf("Tiempo serial: %f segundos\n",finEjecucion-inicioEjecucion);

	free(arreglo);

return 0;
}
