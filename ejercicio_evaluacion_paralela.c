#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(){

    /*
    Programa paralelo para la multiplicación de dos matrices
    */

    int h, q, k, l;

    printf("Ingresa el número de filas de la matriz A: ");
    scanf("%d", &h);

    printf("Ingresa el número de columnas de la matriz A: ");
    scanf("%d", &q);

    printf("Ingresa el número de filas de la matriz B: ");
    scanf("%d", &k);

    printf("Ingresa el número de columnas de la matriz B: ");
    scanf("%d", &l);

    if(q != k){
        printf("No se puede hacer la multiplicación de matrices :( \n");
        return -1;
    }

    int A[h][q], B[k][l], C[h][l];

    printf("Ingresa los elementos de la matriz A:\n");
    for(int i = 0; i < h; i++)
        for(int j = 0; j < q ; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Ingresa los elementos de la matriz B:\n");
    for(int i = 0; i < k; i++)
        for(int j = 0; j < l ; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    double inicio = omp_get_wtime();

    // Inicializar matriz C con ceros
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
            C[i][j] = 0;

    // Multiplicación de matrices en paralelo
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
            for (int x = 0; x < q; x++)
                C[i][j] += A[i][x] * B[x][j];

    double fin = omp_get_wtime();
    double tiempo = fin - inicio;

    printf("Resultado (matriz C):\n");
    for(int i = 0; i < h; i++){
        for(int j = 0; j < l ; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    int hilos;

    #pragma omp parallel
    {
        #pragma omp single
        hilos = omp_get_num_threads();
    }

    printf("Tiempo de ejecución (Paralela con %d hilos): %.4f segundos\n", hilos, tiempo);

    return 0;
}

