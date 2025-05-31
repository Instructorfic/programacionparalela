#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int q, w, p, k, i, j;
    clock_t tiempo_inicio, tiempo_final;
    double segundos;

    tiempo_inicio = clock();

    // Datos de la matriz A
    printf("Número de filas de la matriz A: ");
    scanf("%d", &q);
    printf("Número de columnas de la matriz  A: ");
    scanf("%d", &w);

    int A[q][w];
    for (i = 0; i < q; i++) {
        for (j = 0; j < w; j++) {
             A[i][j] = rand() % 10;
        }
    }

    // Matriz A
    printf("Matriz A:\n");
    for (i = 0; i < q; i++) {
        for (j = 0; j < w; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Datos de la matriz B
    printf("Indique el número de columnas de B: ");
    scanf("%d", &p);

    int B[w][p];
    for (i = 0; i < w; i++) {
        for (j = 0; j < p; j++) {
             B[i][j] = rand() % 10;
        }
    }

    // Mostrar matriz B
    printf("Matriz B:\n");
    for (i = 0; i < w; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Matriz resultante C (m × p)
    int C[q][p];
    for (i = 0; i < q; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            // Calcular C[i][j] = Sumatoria de A * B (A[i][k] * B[k][j])
            for (k = 0; k < w; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Mostrar matriz c
    printf("Matriz resultante C (A × B):\n");
    for (i = 0; i < q; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
tiempo_final = clock();
segundos = (double)(tiempo_inicio - tiempo_final) / CLOCKS_PER_SEC;
printf("%f \n", segundos);
    return 0;
}
