#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int m, n, p, k, i, j;
    srand(time(0));

    printf("Filas de A (m): ");
    scanf("%d", &m);
    printf("Columnas de A (n): ");
    scanf("%d", &n);
    printf("Columnas de B (p): ");
    scanf("%d", &p);

    if (m <= 0 | n <= 0 | p <= 0) {
        printf("Error: Las dimensiones tienen que ser positivas \n");
        return 1;
    }

    int A[m][n], B[n][p], C[m][p];

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

    double tiempo_serial;
    printf("escribe el tiempo serial (segundos):\n ");
    scanf("%lf", &tiempo_serial);

    int hilos[] = {2, 4, 8};
    printf("Los resultados paralelos son:\n");
    printf("--------------------\n");

    for (int t = 0; t < 3; t++) {
        omp_set_num_threads(hilos[t]);
        double inicio = omp_get_wtime();

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
        double tiempo_paralelo = fin - inicio;
        double speed_up = tiempo_serial / tiempo_paralelo;
        double eficiencia = speed_up / hilos[t];

        printf("hilos: %d | tiempo: %.4f s | speed-Up: %.2f | eficiencia: %.2f\n",
               hilos[t], tiempo_paralelo, speed_up, eficiencia);
    }

    return 0;
}
