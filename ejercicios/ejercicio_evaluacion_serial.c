#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanio 50

int main() {
    //VARIABLES
    int matrizA[tamanio][tamanio];
    int matrizB[tamanio][tamanio];
    int matrizC[tamanio][tamanio];

    srand(time(NULL));

    clock_t inicioEjecucion = clock();

    //ENTRADA DE DATOS
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            matrizA[i][j] = rand() % 10;
            matrizB[i][j] = rand() % 10;
            matrizC[i][j] = 0;
        }
    }
    //PROCESOS Y SALIDAS

    //IMPRIMIR MATRIZ A
    printf("Matriz A:\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizA[i][j]);
        }
        printf("\n");
    }

    //IMPRIMIR MATRIZ B
    printf("\nMatriz B:\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizB[i][j]);
        }
        printf("\n");
    }

    //MULTIPLICACION DE MATRICES
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            for (int k = 0; k < tamanio; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    clock_t finEjecucion = clock();

    //RESULTADO
    printf("\nMatriz resultante C (A x B):\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizC[i][j]);
        }
        printf("\n");
    }

    printf("\nTiempo de ejecucion serial: %f segundos\n",
           (double)(finEjecucion - inicioEjecucion) / CLOCKS_PER_SEC);

    return 0;
}
