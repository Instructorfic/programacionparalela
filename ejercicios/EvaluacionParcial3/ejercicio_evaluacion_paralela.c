#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define THREADS 16 //número de hilos a utilizar

int main (){
	int tamanio, i, j;
	printf("Teclee el tamaño de la matriz: ");
	scanf("%d", &tamanio);

	int m1[tamanio][tamanio], m2[tamanio][tamanio], m_producto[tamanio][tamanio];

	// Generar valores de las matrices
	for(i = 0; i < tamanio; i++){
		for(j = 0; j < tamanio; j++){
			m1[i][j] = rand() % 10;
			m2[i][j] = rand() % 10;
		}
	}

	/*
	printf("\nMatriz 1\n");
	for(i = 0; i < tamanio; i++){
		for(j = 0; j < tamanio; j++){
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}

	printf("\nMatriz 2\n");
	for(i = 0; i < tamanio; i++){
		for(j = 0; j < tamanio; j++){
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}*/

	double inicioEjecucion = omp_get_wtime();

	omp_set_num_threads(THREADS);

	#pragma omp parallel for
	for(i = 0; i < tamanio; i++){
		for(j = 0; j < tamanio; j++){
			m_producto[i][j] = m1[i][j] * m2[i][j];
		}
	}

	double finEjecucion = omp_get_wtime();

	/*
	printf("\nMatriz producto resultante\n");
	for(i = 0; i < tamanio; i++){
		for(j = 0; j < tamanio; j++){
			printf("%d ",m_producto[i][j]);
		}
		printf("\n");
	}*/

	printf("Tiempo paralelo: %f segundos\n", finEjecucion-inicioEjecucion);

}
