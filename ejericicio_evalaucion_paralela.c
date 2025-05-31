#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int N;

    // Pedir al usuario el tamaño de la matriz
    printf("Ingresa el tamaño de la matriz: ");
    scanf("%d", &N);

    int matriza[N][N], matrizb[N][N], matrizc[N][N];

    // Ingreso de la matriz A
    printf("Ingresa los valores de la matriz A:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &matriza[i][j]);

    // Ingreso de la matriz B
    printf("Ingresa los valores de la matriz B:\n");
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &matrizb[i][j]);

    // Medir tiempo de ejecución
    double start = omp_get_wtime();

    // Multiplicación de matrices (paralela)
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            matrizc[i][j] = 0;
            for (int k = 0; k < N; k++)
                matrizc[i][j] += matriza[i][k] * matrizb[k][j];
        }

    double end = omp_get_wtime();
    double timeParallel = end - start;

    printf("Tiempo Paralelo: %f segundos\n", timeParallel);

    // Mostrar matriz resultante
    printf("Matriz resultante:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", matrizc[i][j]);
        printf("\n");
    }

    return 0;
}