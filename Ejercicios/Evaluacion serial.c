#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

void llenarMatriz(float matriz[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matriz[i][j] = (float)(rand() % 10);
}

void multiplicarMatricesSerial(float A[N][N], float B[N][N], float C[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    static float A[N][N], B[N][N], C[N][N];
    srand(time(NULL));
    llenarMatriz(A);
    llenarMatriz(B);

    clock_t inicio = clock();
    multiplicarMatricesSerial(A, B, C);
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución (Serial): %.2f segundos\n", tiempo);
    return 0;
}
