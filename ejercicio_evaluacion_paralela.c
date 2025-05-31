#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int m, n, p, k, i, j;
    srand(time(0));

    // Ingresar dimensiones
    printf("Filas de A (m): ");
    scanf("%d", &m);
    printf("Columnas de A (n): ");
    scanf("%d", &n);
    printf("Columnas de B (p): ");
    scanf("%d", &p);

    // Validar dimensiones
    if (m <= 0 || n <= 0 || p <= 0) {
        printf("Error: Dimensiones deben ser positivas.\n");
        return 1;
    }

    // Crear matrices
    int A[m][n], B[n][p], C[m][p];

    // Inicialización serial de matrices 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            B[i][j] = rand() % 10;
        }
    }

    // Pruebas con 2, 4 y 8 hilos
    int hilos[] = {2, 4, 8};
    for (int t = 0; t < 3; t++) {
        omp_set_num_threads(hilos[t]);
        double inicio = omp_get_wtime();

        // Multiplicación paralela 
        #pragma omp parallel for private(i, j, k) shared(A, B, C)
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
                C[i][j] = 0;
                for (k = 0; k < n; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        double fin = omp_get_wtime();
        fprintf(res, "Hilos = %d | Tiempo = %.4f s\n", hilos[t], fin - inicio);
    }

    fclose(res);
    printf("Resultados guardados en 'resultados_paralelo.txt'.\n");
    return 0;
}