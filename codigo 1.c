#include <stdio.h>
#include <time.h>

int main() {
    int tam;
    int mat1[tam][tam], mat2[tam][tam], resultado[tam][tam];
    clock_t inicio_tiempo, fin_tiempo;
    double duracion;

    // Solicitar al usuario el tamaño de las matrices
    printf("Ingrese el tamaño N de las matrices cuadradas (N x N): ");
    scanf("%d", &tam);

    // Leer los elementos de la primera matriz
    printf("Ingrese los elementos de la matriz 1:\n");
    for (int fila = 0; fila < tam; ++fila)
        for (int col = 0; col < tam; ++col) {
            printf("mat1[%d][%d]: ", fila, col);
            scanf("%d", &mat1[fila][col]);
        }

    // Leer los elementos de la segunda matriz
    printf("Ingrese los elementos de la matriz 2:\n");
    for (int fila = 0; fila < tam; ++fila)
        for (int col = 0; col < tam; ++col) {
            printf("mat2[%d][%d]: ", fila, col);
            scanf("%d", &mat2[fila][col]);
        }

    // Inicializar la matriz resultado con ceros
    for (int fila = 0; fila < tam; ++fila)
        for (int col = 0; col < tam; ++col)
            resultado[fila][col] = 0;

    // Medir el tiempo de inicio
    inicio_tiempo = clock();

    // Realizar la multiplicación de matrices
    for (int fila = 0; fila < tam; ++fila)
        for (int col = 0; col < tam; ++col)
            for (int indice = 0; indice < tam; ++indice)
                resultado[fila][col] += mat1[fila][indice] * mat2[indice][col];

    // Medir el tiempo de finalización
    fin_tiempo = clock();

    // Calcular el tiempo total en segundos
    duracion = ((double)(fin_tiempo - inicio_tiempo)) / CLOCKS_PER_SEC;

    // Mostrar la matriz resultado
    printf("Resultado de la multiplicación de matrices:\n");
    for (int fila = 0; fila < tam; ++fila) {
        for (int col = 0; col < tam; ++col)
            printf("%d\t", resultado[fila][col]);
        printf("\n");
    }

    // Mostrar el tiempo de ejecución
    printf("Tiempo de ejecución: %f segundos\n", duracion);

    return 0;
}
