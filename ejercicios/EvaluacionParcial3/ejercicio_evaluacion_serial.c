#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int tamanio;
	printf("Teclee el tamaño de la matriz: ");
	scanf("%d", &tamanio);

	//int *arreglo = (int *)malloc(tamanio * sizeof(int));

	/*for (int i = 0; i < tamanio; i++) {
        	arr[i] = rand() % 10;
    	}*/

	int *arreglo1 = malloc(tamanio * sizeof(int));

	// Generar valores de la matriz
	for(int i = 0; i < tamanio; i++){
		for(int j = 0; j < tamanio; j++){
			arreglo[i][j] = rand() % 10;
		}
	}

	clock_t inicioEjecucion = clock();
	int producto = 1;

	for(int i = 0; i < tamanio; i++){
		producto *= arreglo[i];
	}

	clock_t finEjecucion = clock();

	printf("El producto de los valores del arreglo es: %d\n",producto);
	printf("Tiempo serial: %f segundos\n", (double)(finEjecucion-inicioEjecucion)/CLOCKS_PER_SEC);

	free(arreglo);
}
