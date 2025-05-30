//JONATHAN ELIEL DEL ANGEL FELIX
//CODIGO PARALELO
#include <stdio.h>
#include <time.h>
#include <omp.h>

#define Tamanio 25//VARIABLE PARA EL TAMAÑO MAXIMO DE LA MATRIZ


int main() {
	//DEFINIR VARIABLES
	int matriz1[Tamanio][Tamanio];
	int matriz2[Tamanio][Tamanio];
	int matrizResultado[Tamanio][Tamanio];

	//MATRICES 1 Y 2 CON VALORES
	for (int i = 0; i < Tamanio; i++)
		for (int j = 0; j < Tamanio; j++) {
			matriz1[i][j] = i + j;
			matriz2[i][j] = i - j;
			}

	//ARREGLO PARA EL RENDIMIENTO
	int hilos[] = {2, 4, 8};
	double tiempo_base = 0.0;//BASE DE SPEED-UP

	for (int h = 0; h < 3; h++) {
		//LIMPIAR LA MATRIZ RESULTADO PARA QUE ESTE EN 0
		for (int i = 0; i < Tamanio; i++)
			for (int j = 0; j < Tamanio; j++)
				matrizResultado[i][j] = 0;

	//CANTIDAD DE HILOS
	omp_set_num_threads(hilos[h]);
	//INICIO DE TOMA DE TIEMPO
	double inicio = omp_get_wtime();

	//INICIO DE REGION PARALELA
	#pragma omp parallel for
	//MULTIPLICACION DE MATRICES
	for (int i = 0; i < Tamanio; i++)
		for (int j = 0; j < Tamanio; j++)
			for (int k = 0; k < Tamanio; k++)
				matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];

	//FINALIZACION DEL TIEMPO
	double fin = omp_get_wtime();
	double tiempo = fin - inicio;
	//CALCULOS PARA EL SPEED-UP Y EFICIENCIA
	if (h == 0) tiempo_base = tiempo;

	double speed_up = tiempo_base / tiempo;
	double eficiencia = speed_up / hilos[h];
	//IMPRIMIR LOS RESULTADOS DEL TIEMPO
	printf("Número de hilos = %d -> Tiempo de ejecución: %.4f segundos (Speed-Up: %.2f, Eficiencia: %.2f)\n",hilos[h], tiempo, speed_up, eficiencia);
	}

	//IMPRIMIR LOS RESULTADOS DE LA OPERACION DE MULTIPLICACION DE MATRICES
	printf("El resultado de la operación de matrices NXN:\n");
	for (int i = 0; i < Tamanio; i++) {
		for (int j = 0; j < Tamanio; j++) {
		printf("%6d ", matrizResultado[i][j]);
		}
	printf("\n");
	}

return 0;
}
