#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplicar_matrices(int tamaño, int *matrizA, int *matrizB, int *resultado) {
    int i, j, k;

    for (i = 0; i < tamaño; i++) {
        for (j = 0; j < tamaño; j++) {
            int suma = 0;

            for (k = 0; k < tamaño; k++) {
                suma += matrizA[i * tamaño + k] * matrizB[k * tamaño + j];
            }
            
            resultado[i * tamaño + j] = suma;
        }
    }
}

int main() {
    int tamaño = 5;
    
    int *A = malloc(tamaño * tamaño * sizeof(int));
    int *B = malloc(tamaño * tamaño * sizeof(int));
    int *C = malloc(tamaño * tamaño * sizeof(int));
    
    for (int i = 0; i < tamaño * tamaño; i++) {
        A[i] = i + 1;
        B[i] = (i % 3) + 1;
    }
    
    if(tamaño <= 10) {
        printf("Matriz A:\n");
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; j++) {
                printf("%d ", A[i * tamaño + j]);
            }
            printf("\n");
        }
        
        printf("\nMatriz B:\n");
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; j++) {
                printf("%d ", B[i * tamaño + j]);
            }
            printf("\n");
        }
    }
    
    clock_t inicio = clock();
    
    multiplicar_matrices(tamaño, A, B, C);
    
    clock_t fin = clock();
    
    double tiempo = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    
    printf("\nTiempo de ejecucion: %f segundos\n", tiempo);
    
    if(tamaño <= 10) {
        printf("\nResultado (A x B):\n");
        for (int i = 0; i < tamaño; i++) {
            for (int j = 0; j < tamaño; j++) {
                printf("%d ", C[i * tamaño + j]);
            }
            printf("\n");
        }
    }

    free(A);
    free(B);
    free(C);

    return 0;
}
