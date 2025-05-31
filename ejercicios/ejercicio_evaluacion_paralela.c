#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define tamanio 50

int main() {
    //VARIABLES
    int matrizA[tamanio][tamanio];
    int matrizB[tamanio][tamanio];
    int matrizC[tamanio][tamanio];

    srand(time(NULL));

    //ENTRADA DE DATOS

    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            matrizA[i][j] = rand() % 10;
            matrizB[i][j] = rand() % 10;
            matrizC[i][j] = 0;
        }
    }

    // Imprimir matriz A
    printf("Matriz A:\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizA[i][j]);
        }
        printf("\n");
    }

    // Imprimir matriz B
    printf("\nMatriz B:\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizB[i][j]);
        }
        printf("\n");
    }

    //Tiempo de ejecucin
    double inicioEjecucion = omp_get_wtime();

    #pragma omp parallel for
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            int suma = 0;
            for (int k = 0; k < tamanio; k++) {
                suma += matrizA[i][k] * matrizB[k][j];
            }
            matrizC[i][j] = suma;
        }
    }

    double finEjecucion = omp_get_wtime();

    // Imprimir resultado
    printf("\nMatriz resultante C (A x B):\n");
    for (int i = 0; i < tamanio; i++) {
        for (int j = 0; j < tamanio; j++) {
            printf("%6d ", matrizC[i][j]);
        }
        printf("\n");
    }

    printf("\nTiempo de ejecucion paralelo: %f segundos\n", finEjecucion - inicioEjecucion);

    return 0;
}
