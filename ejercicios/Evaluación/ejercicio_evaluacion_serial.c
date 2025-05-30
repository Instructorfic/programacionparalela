//JONATHAN ELIEL DEL ANGEL FELIX
//CODIGO SERIAL
#include <stdio.h>
#include <time.h>

#define Tamanio 25//VARIABLE PARA EL TAMAÑO MAXIMO DE LA MATRIZ

int main() {
	
	//DEFINIR VARIBLES
	int matriz1[Tamanio][Tamanio],
	    matriz2[Tamanio][Tamanio], 
	    matrizResultado[Tamanio][Tamanio];
	
	int i, j, k;

	clock_t inicioEjecucion = clock();//VARIABLE DE TOMA DE TIEMPO

	//INICIALIZAR LAS MATRICES
	for (i = 0; i < Tamanio; i++) {
		for (j = 0; j < Tamanio; j++) {
			matriz1[i][j] = i + j;
			matriz2[i][j] = i - j;
			matrizResultado[i][j] = 0;//LA MATRIZ RESULTADO LIMPIA
		}
	}

    // MULTIPLICACION DE LAS MATRICES
	for (i = 0; i < Tamanio; i++) {
		for (j = 0; j < Tamanio; j++) {
			for (k = 0; k < Tamanio; k++) {
				matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
				}
			}
		}

	clock_t finEjecucion = clock();//FINAL DE LA VARIABLE DE TOMA DE TIEMPO

    // MOSTRAR EL TIEMPO
	printf("Tiempo serial: %f segundos\n", (double)(finEjecucion - inicioEjecucion) / CLOCKS_PER_SEC);

    // IMPRIMIR EL RESULTADO DE LA OPERACION
	printf("El resultado de la operacion de matrices NXN:\n");
	for (i = 0; i < Tamanio; i++) {
		for (j = 0; j < Tamanio; j++) {
			printf("%6d ", matrizResultado[i][j]);
			}
	printf("\n");
	}

return 0;
}

