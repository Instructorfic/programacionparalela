#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define N 100

void rellenar_matriz(float matriz[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matriz[i][j] = (float)(rand() % 100);
}

void multiplicacion_paralela(float A[N][N], float B[N][N], float C[N][N]) {
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    float A[N][N], B[N][N], C[N][N];
    srand(time(NULL));

    omp_set_num_threads(16);

    rellenar_matriz(A);
    rellenar_matriz(B);

    double inicio = omp_get_wtime();
    multiplicacion_paralela(A, B, C);
    double fin = omp_get_wtime();

    int num_hilos;
    #pragma omp parallel
    {
        #pragma omp master
        num_hilos = omp_get_num_threads();
    }

    printf("Tiempo (paralelo con %d hilos): %.4f segundos\n", num_hilos, fin - inicio);

    return 0;
}
