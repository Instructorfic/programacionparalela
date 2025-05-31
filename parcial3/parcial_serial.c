#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void llenar(int m[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            m[i][j] = rand() % 100; //te genera 100 valores random del 0 al 99
}

void multiplicar(int a[N][N], int b[N][N], int c[N][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            c[i][j] = 0;
            for (int k = 0; k < N; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int A[N][N], B[N][N], C[N][N];
    clock_t inicio, fin;

    srand(time(NULL)); //se usa para que genere una secuencia distinta en cada ejecucion
    llenar(A);
    llenar(B);

    inicio = clock();
    multiplicar(A, B, C);
    fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo: %.6f segundos\n", tiempo);

    return 0;
}
