//Programacion paralela
//Sergio A. Jacobo Mandujan
//Evaluacion

#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, m;

    printf("Ingresa el tamaño de la matriz: ");
    scanf("%d", &n);

    printf("\nIngresa la cantidad de hilos a usar: ");
    scanf("%d", &m);
    omp_set_num_threads(m);

    int matriz1[n][n], matriz2[n][n], resultado[n][n];
    char opcion;

    printf("\n¿Vas a llenar las matrices manualmente? (s/n): ");
    scanf(" %c", &opcion);

    if(opcion == 's' || opcion == 'S') {
        printf("\nValores para la Matriz 1:\n");
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                printf("Posicion [%d][%d]: ", i, j);
                scanf("%d", &matriz1[i][j]);
            }
        }

        printf("\nValores para la Matriz 2:\n");
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                printf("Posicion [%d][%d]: ", i, j);
                scanf("%d", &matriz2[i][j]);
            }
        }
    } else {
        srand(time(0));
        #pragma omp parallel for
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                matriz1[i][j] = rand() % 10;
                matriz2[i][j] = rand() % 10;
            }
        }
    }

    double inicio = omp_get_wtime();

    #pragma omp parallel for
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            resultado[i][j] = 0;
        }
    }

    #pragma omp parallel for
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    double fin = omp_get_wtime();

    printf("\nMatriz resultado:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    printf("\nTiempo de ejecucion: %f segundos\n", fin - inicio);

    return 0;
}
