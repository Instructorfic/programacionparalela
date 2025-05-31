#include <stdio.h>
#include <time.h>

int main() {
    int N;
    int A[N][N], B[N][N], C[N][N];
    clock_t inicio, fin;
    double tiempo_total;

printf("Ingrese el tamaño N de las matrices cuadradas (N x N): ");
    scanf("%d", &N);



    printf("Ingrese los elementos de la matriz A:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Ingrese los elementos de la matriz B:\n");
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }


    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            C[i][j] = 0;


    inicio = clock();

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            for (int k = 0; k < N; ++k)
                C[i][j] += A[i][k] * B[k][j];


    fin = clock();


    tiempo_total = ((double)(fin - inicio)) / CLOCKS_PER_SEC;


    printf("Resultado de la multiplicación de matrices:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j)
            printf("%d\t", C[i][j]);
        printf("\n");
    }


    printf("Tiempo de ejecución: %f segundos\n", tiempo_total);

    return 0;
}

