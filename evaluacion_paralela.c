#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Multiplicación de matrices cuadradas de forma secuencial
void multiplicar_matrices(int *A, int *B, int *C, int n) {
    for (int fila = 0; fila < n; fila++) {
        for (int col = 0; col < n; col++) {
            int suma = 0;
            for (int k = 0; k < n; k++) {
                suma += A[fila * n + k] * B[k * n + col];
            }
            C[fila * n + col] = suma;
        }
    }
}

int main() {
    const int tamanio = 100;  // Tamaño de la matriz cuadrada

    // Reservar memoria para las matrices
    int *matrizA = (int *)malloc(tamanio * tamanio * sizeof(int));
    int *matrizB = (int *)malloc(tamanio * tamanio * sizeof(int));
    int *resultado = (int *)malloc(tamanio * tamanio * sizeof(int));

    if (!matrizA || !matrizB || !resultado) {
        fprintf(stderr, "Error al asignar memoria.\n");
        free(matrizA);
        free(matrizB);
        free(resultado);
        return EXIT_FAILURE;
    }

    // Inicializar valores aleatorios para A y B
    srand((unsigned)time(NULL));
    for (int i = 0; i < tamanio * tamanio; i++) {
        matrizA[i] = rand() % 10;
        matrizB[i] = rand() % 10;
    }

    // Medir tiempo de ejecución
    clock_t tiempo_inicio = clock();
    multiplicar_matrices(matrizA, matrizB, resultado, tamanio);
    clock_t tiempo_fin = clock();

    // Mostrar solo una parte de la matriz para no saturar la salida
    int imprimir_n = (tamanio > 10) ? 10 : tamanio;

    printf("Matriz A (primeros %d x %d elementos):\n", imprimir_n, imprimir_n);
    for (int i = 0; i < imprimir_n; i++) {
        for (int j = 0; j < imprimir_n; j++) {
            printf("%d ", matrizA[i * tamanio + j]);
        }
        printf("\n");
    }

    printf("Matriz B (primeros %d x %d elementos):\n", imprimir_n, imprimir_n);
    for (int i = 0; i < imprimir_n; i++) {
        for (int j = 0; j < imprimir_n; j++) {
            printf("%d ", matrizB[i * tamanio + j]);
        }
        printf("\n");
    }

    printf("Resultado (primeros %d x %d elementos):\n", imprimir_n, imprimir_n);
    for (int i = 0; i < imprimir_n; i++) {
        for (int j = 0; j < imprimir_n; j++) {
            printf("%d ", resultado[i * tamanio + j]);
        }
        printf("\n");
    }

    // Mostrar tiempo de ejecución
    double tiempo_total = (double)(tiempo_fin - tiempo_inicio) / CLOCKS_PER_SEC;
    printf("Versión secuencial, Tiempo de ejecución: %.6f segundos\n", tiempo_total);

    // Liberar memoria
    free(matrizA);
    free(matrizB);
    free(resultado);

    return 0;
}