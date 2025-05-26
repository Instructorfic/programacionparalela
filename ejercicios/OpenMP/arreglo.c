#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void generarArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int main() {
    int n, target;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    printf("Ingrese el número a buscar: ");
    scanf("%d", &target);

    int *arr = (int *)malloc(n * sizeof(int));
    generarArray(arr, n);

    int position = -1;

    // Implementación con OpenMP
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            #pragma omp critical
            position = i;
        }
    }

    if (position != -1) {
        printf("Número encontrado en la posición: %d\n", position);
    } else {
        printf("Número no encontrado.\n");
    }

    // Imprimir arreglo
    printf("\nArreglo: ");

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
