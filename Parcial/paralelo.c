#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define N 1000  // Mismo tamaño que en la versión serial

void inicializar_matriz(int matriz[N][N]) {
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100;
        }
    }
}

void multiplicar_matrices(int A[N][N], int B[N][N], int C[N][N]) {
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[N][N], B[N][N], C[N][N];
    double inicio, fin, tiempo_paralelo;
    int hilos[] = {2, 4, 8};
    int num_pruebas = sizeof(hilos) / sizeof(hilos[0]);

    srand(time(NULL));

    // Inicializar matrices
    inicializar_matriz(A);
    inicializar_matriz(B);

    for (int i = 0; i < num_pruebas; i++) {
        omp_set_num_threads(hilos[i]);
        
        inicio = omp_get_wtime();
        multiplicar_matrices(A, B, C);
        fin = omp_get_wtime();
        
        tiempo_paralelo = fin - inicio;
        printf("Hilos = %d -> Tiempo: %.2f segundos\n", hilos[i], tiempo_paralelo);
    }

    return 0;
}
