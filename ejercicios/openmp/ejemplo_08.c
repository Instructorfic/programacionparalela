#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main() {
    int n, numeroBuscar, posicion = -1;

    // Solicitar tamaño del arreglo y número a buscar
    printf("Proporcione el tamaño del arreglo: ");
    scanf("%d", &n);
    printf("Proporcione el número a buscar: ");
    scanf("%d", &numeroBuscar);

    int *arreglo = (int*)malloc(n * sizeof(int));

    // Llenado del arreglo con valores aleatorios
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 100;
    }

    double tiempoInicio = omp_get_wtime(); // Iniciar medición de tiempo

    // Búsqueda paralela con OpenMP
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numeroBuscar) {
            #pragma omp critical
            posicion = i; // Protección contra condiciones de carrera
        }
    }

    double tiempoFin = omp_get_wtime(); // Finalizar medición

    // Mostrar resultados
    if (posicion != -1) {
        printf("Número encontrado en la posición %d\n", posicion);
    } else {
        printf("Número no encontrado.\n");
    }

    printf("Tiempo de ejecución: %f segundos\n", tiempoFin - tiempoInicio);

    free(arreglo);
    return 0;
}