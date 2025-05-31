#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

#define N 100 // Tamaño de la matriz

void generar_matriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matriz[i][j] = rand() % 100;
}

void multiplicar_matrices(int A[N][N], int B[N][N], int C[N][N]) {
    #pragma omp parallel for
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

int main() {
    int A[N][N], B[N][N], C[N][N];
    double inicio, fin;

    srand(time(NULL));
    generar_matriz(A);
    generar_matriz(B);

    inicio = omp_get_wtime();
    multiplicar_matrices(A, B, C);
    fin = omp_get_wtime();

    printf("Tiempo de ejecución: %.6f segundos\n", fin - inicio);
    return 0;
}
