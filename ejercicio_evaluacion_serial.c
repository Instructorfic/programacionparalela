#include <stdio.h>
#include <time.h>

int main(){

    /*
    Programa serial para la multiplicación de dos matrices
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

    clock_t inicio = clock();

    // Inicializar matriz C con ceros
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
            C[i][j] = 0;

    // Multiplicación
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
            for (int x = 0; x < q; x++)
                C[i][j] += A[i][x] * B[x][j];

    clock_t fin = clock();
    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    printf("Matriz C:\n");
    for(int i = 0; i < h; i++){
        for(int j = 0; j < l ; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    printf("Tiempo de ejecución (Serial): %.2f segundos\n", tiempo);

    return 0;
}

