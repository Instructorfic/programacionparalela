//actividad: programa en c que busque un numero dentro de un arreglo cuyo tamaño y el valor a buscar sean ingresados por el usuario e imprimir un mensaje con la posicion en la que se encuentra
//dicho numero, utilizando paralelismo con openmp para mejorar el rendimiento
//emily delgado
//22/mayo/2025
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

// PART1 - DEFINIR VARIABLES
int main() {
    int n, buscar;
    int i, encontrado = 0;

    // PART2 - Pedir información al usuario con tamaño del arreglo
    printf("tamaño del arreglo: ");
    scanf("%d", &n);
//2.1 agregar la restriccion
    if (n <= 0 || n > 1000) {
        printf("El tamaño del arreglo debe ser entre 1 y 1000.\n");
	return 1;
}

    // PART3 - Crear arreglo y llenarlo con los numeros
    int arreglo[n];

    for (i = 0; i < n; i++) {
        arreglo[i] = rand() % 100;
    }

    //PArt4. Mostrar el arreglo
    printf("\nArreglo :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    // PART5 - Pedir número a buscar
    printf("\nNumero a buscar: ");
    scanf("%d", &buscar);

    // PART6 - Buscar en paralelo con OpenMP, poner el if adentro del for
    #pragma omp parallel for
    for (i = 0; i < n; i++) {
        if (arreglo[i] == buscar) {
            if (!encontrado) {
                encontrado = 1;
                printf("El valor %d se encuentra en la posición %d (hilo %d)\n", buscar, i, omp_get_thread_num());
            }
        }
    }

    // PART7 - Si no se encontró el valor hacerlo con if
    if (!encontrado) {
        printf("El valor %d no se encuentra en el arreglo.\n", buscar);
    }

    return 0;
}
