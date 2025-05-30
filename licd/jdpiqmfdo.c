#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int n, valueToFind;
    int foundIndex = -1;

    // Solicitar el tamaño del arreglo y el número a buscar
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El tamaño del arreglo debe ser mayor que cero.\n");
        return 1;
    }

    printf("Ingrese el numero a buscar (entre 0 y 59): ");
    scanf("%d", &valueToFind);

    if (valueToFind < 0 || valueToFind > 59) {
        printf("El número a buscar debe estar entre 0 y 59.\n");
        return 1;
    }

    // Crear el arreglo y llenarlo con números aleatorios
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 60;  // Números entre 0 y 59
    }

    // Mostrar el arreglo (opcional)
    printf("Arreglo generado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Búsqueda paralela
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        if (array[i] == valueToFind) {
            #pragma omp critical
            {
                if (foundIndex == -1 || i < foundIndex) {
                    foundIndex = i;
                }
            }
        }
    }

    // Resultado
    if (foundIndex != -1) {
        printf("El numero %d se encuentra en la posicion %d del arreglo.\n", valueToFind, foundIndex);
    } else {
        printf("El numero %d no se encuentra en el arreglo.\n", valueToFind);
    }

    // Liberar memoria
    free(array);

    return 0;
}
