#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<omp.h>

int main(){
	//VARIABLES
	//inicia el generador de numeros aleatorios
	srand(time(NULL));

	int tamano=0;
	int arr[tamano];

	//ENTRADA DE DATOS
	printf("Ingrese el tamano que tendra el arreglo: ");
	scanf("%d",&tamano);
	
	#pragma omp parralel for private(numeroAleatorio)
	for(int i=0;i<tamano;i++){
		int numeroAleatorio=(rand() %100)+1;
		int numero=numeroAleatorio;
 		arr[i]=arr[numero];
		printf("[%d]: %d\n",i,arr[i]);
		numero=0;
	}

	//PROCESOS Y SALIDAS




return 0;
}
