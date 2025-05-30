/* 21, Mayo, 2025
Actividad desarrollar un programa en C que busque un numero dentro de un
arreglo cuyo tamaño y el valor a buscar sean ingresados por el usuario
e imprimir un mensaje con la posicion en la que se encuentre dicho numero,
utilizando paralelismo con OpenMP para mejorar el rendimiento.
Requisitos:
1. El programa debe solicitar al usuario: el tamaño del arrgloe (n) y el
numero a buscar.
2. Generar automaticamente un arreglo de tamaño N con valores aleatorios
entre 0 y 59.
3. Implementar la busqueda utilizando paralelismo con OpenMP
4. Dividir la tarea entre multiples hilos, utilizando #pragma omp parallel
for */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

int main() {
    int tamano, numeroABuscar;
    int posicionEncontrada = -1;

    // Solicitar el tamaño del arreglo y el número a buscar
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamano);

    if (tamano <= 0) {
        printf("El tamaño del arreglo debe ser mayor que cero.\n");
        return 1;
    }

    printf("Ingrese el numero a buscar (entre 0 y 59): ");
    scanf("%d", &numeroABuscar);

    if (numeroABuscar < 0 || numeroABuscar > 59) {
        printf("El número a buscar debe estar entre 0 y 59.\n");
        return 1;
    }

    // Crear el arreglo y llenarlo con números aleatorios
    int *arreglo = (int *)malloc(tamano * sizeof(int));
    if (arreglo == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    srand(time(NULL));
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % 60;  // Números entre 0 y 59
    }

    // Mostrar el arreglo (opcional)
    printf("Arreglo generado:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    // Búsqueda paralela del número
    #pragma omp parallel for
    for (int i = 0; i < tamano; i++) {
        if (arreglo[i] == numeroABuscar) {
            #pragma omp critical
            {
                if (posicionEncontrada == -1 || i < posicionEncontrada) {
                    posicionEncontrada = i;
                }
            }
        }
    }

    // Resultado
    if (posicionEncontrada != -1) {
        printf("El numero %d se encuentra en la posicion %d del arreglo.\n", numeroABuscar, posicionEncontrada);
    } else {
        printf("El numero %d no se encuentra en el arreglo.\n", numeroABuscar);
    }

    // Liberar memoria
    free(arreglo);

    return 0;
}
