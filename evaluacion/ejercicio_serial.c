//Programacion paralela
//Sergio A. Jacobo Mandujan
//Evaluacion

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int tamano, i, j;
	printf("Ingresa el tamaño que deseas de la matriz: ");
	scanf("%d", &tamano);

	int matriz_1[tamano][tamano], matriz_2[tamano][tamano], matriz_resultado[tamano][tamano];

	printf("Introduce los valores de la matriz [1]:\n");
	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	printf("Elemento [%d][%d]: ", i+1, j+1);
            	scanf("%d", &matriz_1[i][j]);
		}
    	}

    // Solicitar valores de la segunda matriz
    printf("Introduce los valores de la matriz[2]:\n");
	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	printf("Elemento [%d][%d]: ", i+1, j+1);
            	scanf("%d", &matriz_2[i][j]);
        	}
    	}

    // Mostrar las matrices ingresadas (opcional)
	printf("\nMatriz [1]:\n");
    	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	printf("%d ", matriz_1[i][j]);
        	}
        	printf("\n");
    	}

	printf("\nMatriz [2]:\n");
	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	printf("%d ", matriz_2[i][j]);
        	}
        	printf("\n");
    	}

    clock_t inicio_de_ejecucion = clock();

    // Multiplicación de matrices (producto elemento por elemento)
	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	matriz_resultado[i][j] = matriz_1[i][j] * matriz_2[i][j];
        	}
    	}

	clock_t fin_de_ejecucion = clock();

    // Mostrar matriz resultante
	printf("\nResultado de la matriz [1] y [2]:\n");
    	for(i = 0; i < tamano; i++) {
        	for(j = 0; j < tamano; j++) {
            	printf("%d ", matriz_resultado[i][j]);
        	}
        	printf("\n");
    	}

	printf("\nTiempo serial: %f segundos\n", (double)(fin_de_ejecucion - inicio_de_ejecucion) / CLOCKS_PER_SEC);

return 0;
}
