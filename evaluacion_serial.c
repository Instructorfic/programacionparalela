#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función que hace la multiplicación de matrices
void multiplicar_matrices(int *matriz1, int *matriz2, int *resultado, int tam) {
    for (int fila = 0; fila < tam; fila++) {
        for (int col = 0; col < tam; col++) {
            resultado[fila * tam + col] = 0;
            for (int k = 0; k < tam; k++) {
                resultado[fila * tam + col] += matriz1[fila * tam + k] * matriz2[k * tam + col];
            }
        }
    }
}

int main() {
    int tamano = 100; // Tamaño de la matriz
    int *matriz1 = (int *)malloc(tamano * tamano * sizeof(int));
    int *matriz2 = (int *)malloc(tamano * tamano * sizeof(int));
    int *matriz_resultado = (int *)malloc(tamano * tamano * sizeof(int));

    // Inicializar las matrices con valores aleatorios
    srand(time(NULL));
    for (int fila = 0; fila < tamano; fila++) {
        for (int col = 0; col < tamano; col++) {
            matriz1[fila * tamano + col] = rand() % 10;
            matriz2[fila * tamano + col] = rand() % 10;
        }
    }

    // Iniciar el contador de tiempo
    clock_t inicio = clock();

    // Multiplicar las matrices
    multiplicar_matrices(matriz1, matriz2, matriz_resultado, tamano);

    // Finalizar el contador de tiempo
    clock_t fin = clock();

    // Imprimir matrices (opcional)
    printf("Matriz 1:\n");
    for (int fila = 0; fila < tamano; fila++) {
        for (int col = 0; col < tamano; col++) {
            printf("%d ", matriz1[fila * tamano + col]);
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for (int fila = 0; fila < tamano; fila++) {
        for (int col = 0; col < tamano; col++) {
            printf("%d ", matriz2[fila * tamano + col]);
        }
        printf("\n");
    }

    printf("Matriz Resultado:\n");
    for (int fila = 0; fila < tamano; fila++) {
        for (int col = 0; col < tamano; col++) {
            printf("%d ", matriz_resultado[fila * tamano + col]);
        }
        printf("\n");
    }

    // Calcular y mostrar el tiempo de ejecución
    double tiempo_ejecucion = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("\nTiempo de ejecución (versión serial): %f segundos\n", tiempo_ejecucion);

    // Liberar la memoria
    free(matriz1);
    free(matriz2);
    free(matriz_resultado);

    return 0;
}
