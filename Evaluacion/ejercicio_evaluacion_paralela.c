#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>


int main() {
    int N = 5;
    int *A = malloc(N * N * sizeof(int));
    int *B = malloc(N * N * sizeof(int));
    int *C = malloc(N * N * sizeof(int));

    for (int i = 0; i < N * N; i++) {
        A[i] = i + 1;
        B[i] = (i % 5) + 1;
    }

    printf("Matriz A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", A[i * N + j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", B[i * N + j]);
        }
        printf("\n");
    }

    int num_hilos = 8;
    omp_set_num_threads(num_hilos);
    printf("\nUsando %d hilos para la multiplicacion...\n", num_hilos);

    double inicio = omp_get_wtime();

    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int suma = 0;
            for (int k = 0; k < N; k++) {
                suma += A[i * N + k] * B[k * N + j];
            }
            C[i * N + j] = suma;
        }
    }

    double fin = omp_get_wtime();
    printf("\nTiempo de ejecucion paralela: %f segundos\n", fin - inicio);

    printf("\nResultado (A x B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", C[i * N + j]);
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);
    return 0;
}
