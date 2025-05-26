#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <omp.h>

int main() {
    int *arreglo = NULL;
    int TAMANO = 0;
    int cantidad_ingresada = 0;
    int opcion;
    int valor_buscar;

    do {
        printf("\n--- MENÚ ---\n");
        printf("1. Establecer tamaño del arreglo\n");
        printf("2. Ingresar valores al arreglo\n");
        printf("3. Mostrar arreglo\n");
        printf("4. Buscar un valor en el arreglo\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el tamaño del arreglo: ");
                scanf("%d", &TAMANO);
                free(arreglo); // liberar si ya se había creado
                arreglo = (int*) malloc(TAMANO * sizeof(int));
                cantidad_ingresada = 0;
                break;

            case 2:
                if (TAMANO <= 0) {
                    printf("Primero debe establecer el tamaño del arreglo (opción 1).\n");
                } else {
                    printf("Ingrese %d valores:\n", TAMANO);
                    for (int i = 0; i < TAMANO; i++) {
                        printf("Valor %d: ", i + 1);
                        scanf("%d", &arreglo[i]);
                    }
                    cantidad_ingresada = TAMANO;
                }
                break;

            case 3:
                if (cantidad_ingresada == 0) {
                    printf("El arreglo aún no tiene valores.\n");
                } else {
                    printf("Arreglo: ");
                    for (int i = 0; i < cantidad_ingresada; i++) {
                        printf("%d ", arreglo[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if (cantidad_ingresada == 0) {
                    printf("Debe ingresar valores al arreglo primero (opción 2).\n");
                } else {
                    printf("Ingrese el número a buscar: ");
                    scanf("%d", &valor_buscar);

                    int encontrado = 0;
                    int posicion = -1;

                    #pragma omp parallel for shared(encontrado, posicion)
                    for (int i = 0; i < cantidad_ingresada; i++) {
                        if (!encontrado && arreglo[i] == valor_buscar) {
                            #pragma omp critical
                            {
                                if (!encontrado) {
                                    encontrado = 1;
                                    posicion = i;
                                }
                            }
                        }
                    }

                    if (encontrado) {
                        printf("Se encontró el número %d en la posición %d.\n", valor_buscar, posicion);
                    } else {
                        printf("El número %d no se encontró en el arreglo.\n", valor_buscar);
                    }
                }
                break;

            case 5:
                printf("Saliendo del programa.\n");
                break;

            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }

    } while (opcion != 5);

    free(arreglo);
    return 0;
}
