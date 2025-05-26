#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define tamano 10000000000

int main(){

	//VARIABLES
	double *arr=malloc(tamano*sizeof(double));
	double suma=0.0;

	//ENTRADA DE DATOS
	for(int i=0;i<tamano;i++){
		arr[i]=i*0.1;
	}

	//PROCESOS Y SALIDAS
	clock_t inicioEjecucion=clock();

	for(int i=0;i<tamano;i++){
		suma+=arr[i];
	}

	clock_t finEjecucion=clock();

	printf("La suma es: %f\n",suma);
	printf("Tiempo serial: %f segundos\n",(double)(finEjecucion-inicioEjecucion)/CLOCKS_PER_SEC);

	free(arr);

return 0;
}
