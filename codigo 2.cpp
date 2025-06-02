
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int filasA, colsA, colsB;
    int x, y, z;
    srand(time(0));

    // Ingresar dimensiones
    printf("Filas de A (filasA): ");
    scanf("%d", &filasA);
    printf("Columnas de A (colsA): ");
    scanf("%d", &colsA);
    printf("Columnas de B (colsB): ");
    scanf("%d", &colsB);

    // Validar dimensiones
    if (filasA <= 0 || colsA <= 0 || colsB <= 0) {
        printf("Error: Las dimensiones deben ser positivas.\n");
        return 1;
    }

    // Crear matrices
    int matrizA[filasA][colsA], matrizB[colsA][colsB], matrizC[filasA][colsB];

    // Inicializar matrices con valores aleatorios
    for (x = 0; x < filasA; x++) {
        for (y = 0; y < colsA; y++) {
            matrizA[x][y] = rand() % 10;
        }
    }
    for (x = 0; x < colsA; x++) {
        for (y = 0; y < colsB; y++) {
            matrizB[x][y] = rand() % 10;
        }
    }

    // Obtener tiempo serial (para calcular speed-up)
    double tiempoSecuencial;
    printf("\nIngrese el tiempo serial (segundos): ");
    scanf("%lf", &tiempoSecuencial);

    // Probar con 2, 4 y 8 hilos
    int cantidadesHilos[] = {2, 4, 8};
    printf("\nResultados paralelos:\n");
    printf("--------------------\n");

    for (int h = 0; h < 3; h++) {
        omp_set_num_threads(cantidadesHilos[h]);
        double tiempoInicio = omp_get_wtime();

        #pragma omp parallel for private(x, y, z) shared(matrizA, matrizB, matrizC)
        for (x = 0; x < filasA; x++) {
            for (y = 0; y < colsB; y++) {
                matrizC[x][y] = 0;
                for (z = 0; z < colsA; z++) {
                    matrizC[x][y] += matrizA[x][z] * matrizB[z][y];
                }
            }
        }

        double tiempoFin = omp_get_wtime();
        double tiempoParalelo = tiempoFin - tiempoInicio;
        double aceleracion = tiempoSecuencial / tiempoParalelo;
        double eficiencia = aceleracion / cantidadesHilos[h];

        printf("Hilos: %d | Tiempo: %.4f s | Speed-Up: %.2f | Eficiencia: %.2f\n",
               cantidadesHilos[h], tiempoParalelo, aceleracion, eficiencia);
    }

    return 0;
}
