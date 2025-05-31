#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>  // Incluir OpenMP

// Función que hace la multiplicación de matrices de forma paralela
void multiplicar_matriz(int *M_A, int *M_B, int *M_R, int N) {
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M_R[i * N + j] = 0;
            for (int k = 0; k < N; k++) {
                M_R[i * N + j] += M_A[i * N + k] * M_B[k * N + j];
            }
        }
    }
}

int main() {
    int N = 100; // Tamaño de la matriz
    int *M_A = (int *)malloc(N * N * sizeof(int));
    int *M_B = (int *)malloc(N * N * sizeof(int));
    int *M_R = (int *)malloc(N * N * sizeof(int));

    // Establecer el número de hilos que OpenMP debe usar
    int num_threads = 8;  // Aquí puedes poner 2, 4, 8, o cualquier número de hilos
    omp_set_num_threads(num_threads);

    // Inicializar las matrices con valores aleatorios
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M_A[i * N + j] = rand() % 10;  // Asignar valores aleatorios a M_A
            M_B[i * N + j] = rand() % 10;  // Asignar valores aleatorios a M_B
        }
    }

    // Inicializar el contador de tiempo
    double start = omp_get_wtime();

    // Multiplicar las matrices de forma paralela
    multiplicar_matriz(M_A, M_B, M_R, N);

    // Terminar el contador de tiempo
    double end = omp_get_wtime();

    // Imprimir las matrices y el resultado
    printf("Matriz A:\\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M_A[i * N + j]);
        }
        printf("\\n");
    }

    printf("Matriz B:\\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M_B[i * N + j]);
        }
        printf("\\n");
    }

    printf("Matriz Resultante:\\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M_R[i * N + j]);
        }
        printf("\\n");
    }

    // Calcular el tiempo de ejecución
    double tiempo_serial = end - start;
    printf("Versión paralela, Tiempo de ejecución: %f segundos\\n", tiempo_serial);

    // Liberar la memoria
    free(M_A);
    free(M_B);
    free(M_R);

    return 0;
}
