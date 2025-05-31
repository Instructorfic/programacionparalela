#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int N,H;
    printf("Ingrese el tamaño N de las matrices cuadradas (N x N): ");
    scanf("%d", &N);

    printf("Ingrese el numero de hilos a usar : ");
    scanf("%d", &H);

    omp_set_num_threads(H);


    int **A = (int **)malloc(N * sizeof(int *));
    int **B = (int **)malloc(N * sizeof(int *));
    int **C = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; ++i) {
        A[i] = (int *)malloc(N * sizeof(int));
        B[i] = (int *)malloc(N * sizeof(int));
        C[i] = (int *)malloc(N * sizeof(int));
    }

    printf("Ingrese los elementos de la matriz A:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Ingrese los elementos de la matriz B:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            C[i][j] = 0;

    double start_time = omp_get_wtime();

    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num(); // Identificador del hilo
        int num_threads = omp_get_num_threads(); // Número total de hilos

        printf("Hilo %d de %d en ejecución...\n", thread_id, num_threads);

        #pragma omp for collapse(2)
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                for (int k = 0; k < N; ++k)
                    C[i][j] += A[i][k] * B[k][j];
    }

    double end_time = omp_get_wtime();
    double elapsed_time = end_time - start_time;

    printf("Resultado de la multiplicación de matrices:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    printf("Tiempo de ejecución: %f segundos\n", elapsed_time);

    for (int i = 0; i < N; ++i) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}

