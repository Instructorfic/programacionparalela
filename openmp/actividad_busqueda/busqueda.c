#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

// NOT FOUND == -1
int find(int *X, int size, int s) {
    int index = -1;
    #pragma omp parallel for shared(index)
    for (int i = 0; i < size; i++) {
        if (index != -1) {
            continue;
        }
        if (X[i] == s) {
            index = i;
        }
    }
    return index;
}

int main() {
    printf("Escriba el tamaño del arreglo seguido del número a buscar:\n");
    int buscando, n;
    scanf("%d %d", &n, &buscando);

    int X[n];
    srand(1);
    for(int i=0; i<n; i++) {
        X[i] = rand()%100;
    }

    int indice = find(X, n, buscando);
    printf(indice != -1 ? "Se encontró %d en posición %i\n" : "No se encontró %d\n", buscando, indice);
}