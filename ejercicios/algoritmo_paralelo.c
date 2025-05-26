#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define tamano 100000000

int main(){

	//VARIABLES
	double *arr=malloc(tamano*sizeof(double));
	double suma=0.0;

	//ENTRADA DE DATOS
	for(int i=0;i<tamano;i++){
		arr[i]=i*0.1;
	}

	//PROCESOS Y SALIDAS
	double inicioEjecucion=omp_get_wtime();

	#pragma omp parallel for reduction(+:suma)
	for(int i=0;i<tamano;i++){
		suma+=arr[i];
	}

	double finEjecucion=omp_get_wtime();

	printf("La suma es: %f\n",suma);
	printf("Tiempo serial: %f segundos\n",finEjecucion-inicioEjecucion);

	free(arr);

return 0;
}
