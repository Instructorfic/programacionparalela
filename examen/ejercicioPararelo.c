#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int q, w, p, k, i, j;
    srand(time(0));

    // Dimensiones para las matrices
    printf("Filas matriz A: ");
    scanf("%d", &q);
    printf("Columnas matriz A: ");
    scanf("%d", &w);
    printf("Columnas matriz B: ");
    scanf("%d", &p);

    // Matrices
    int A[q][w], B[w][p], C[q][p];

    // Matrice seriales
    for (i = 0; i < q; i++) {
        for (j = 0; j < w; j++) {
            A[i][j] = rand() % 10;
        }
    }
    for (i = 0; i < w; i++) {
        for (j = 0; j < p; j++) {
            B[i][j] = rand() % 10;
        }
    }

    // Obtener speed-up para tiempo serial
    double tiempo_serial;
    printf("\nTiempo para el tipo serial (segundos): ");
    scanf("%lf", &tiempo_serial);

    // Para 2, 4 y 8 hilos
    int hilos[] = {2, 4, 8};
    printf("\nResultados paralelos de 2, 4 y 8 hilos:\n");

    for (int t = 0; t < 3; t++) {
        omp_set_num_threads(hilos[t]);
        double inicio = omp_get_wtime();

        #pragma omp parallel for private(i, j, k) shared(A, B, C)
        for (i = 0; i < q; i++) {
            for (j = 0; j < p; j++) {
                C[i][j] = 0;
                for (k = 0; k < w; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        double fin = omp_get_wtime();
        double tiempo_paralelo = fin - inicio;
        double speed_up = tiempo_serial / tiempo_paralelo;
        double eficiencia = speed_up / hilos[t];

        printf("Hilos: %d, Tiempo: %.4f s, Speed-Up: %.2f, Eficiencia: %.2f\n",  hilos[t], tiempo_paralelo, speed_up, eficiencia);
    	}

    return 0;
}
