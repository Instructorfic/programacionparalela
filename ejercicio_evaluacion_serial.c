#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n, p, k, i, j;
    srand(time(0));
    clock_t inicio, fin;
    double tiempo_total;

    // Ingresar dimensiones de A (m × n)
    printf("Indique el número de filas de A: ");
    scanf("%d", &m);
    printf("Indique el número de columnas de A: ");
    scanf("%d", &n);
  
    int A[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
             A[i][j] = rand() % 10;
        }
    }

    // Mostrar matriz A
    printf("Matriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
        
    // Ingresar dimensiones de B (n × p)
    printf("Indique el número de columnas de B: ");
    scanf("%d", &p);

    int B[n][p];
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
             B[i][j] = rand() % 10;
        }
    }

    // Mostrar matriz B
    printf("Matriz B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }


        
    // Inicializar matriz resultante C (m × p)
    int C[m][p];

     // Medir el tiempo de inicio
    inicio = clock();

    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            // Calcular C[i][j] = Sumatoria (A[i][k] * B[k][j])
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

     // Medir el tiempo de finalización
    fin = clock();

     // Calcular el tiempo total en segundos
    tiempo_total = ((double)(fin - inicio)) / CLOCKS_PER_SEC;

    // Mostrar resultado
    printf("Matriz resultante C (A × B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Mostrar el tiempo de ejecución
    printf("Tiempo de ejecución: %f segundos\n", tiempo_total);

    return 0;
}