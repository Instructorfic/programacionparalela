#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000  // Tamaño de las matrices cuadradas

void inicializar_matriz(int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = rand() % 100;  // Valores entre 0 y 99
        }
    }
}

void multiplicar_matrices(int A[N][N], int B[N][N], int C[N][N]) {
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
    clock_t inicio, fin;
    double tiempo_serial;

    srand(time(NULL));  // Semilla para números aleatorios

    // Inicializar matrices
    inicializar_matriz(A);
    inicializar_matriz(B);

    // Multiplicación serial
    inicio = clock();
    multiplicar_matrices(A, B, C);
    fin = clock();

    tiempo_serial = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion serial: %.2f segundos\n", tiempo_serial);

    return 0;
}
