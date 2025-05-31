#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

void rellenar_matriz( float matriz[N][N] ) {
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++)
            matriz[i][j] = (float)(rand() % 100); 

}

void multiplicacion_serial( float A[N][N], float B[N][N], float C[N][N] ) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

int main() {
    float A[N][N], B[N][N], C[N][N];
    srand(time(NULL));  

    rellenar_matriz(A);
    rellenar_matriz(B);

    clock_t inicio = clock();
    multiplicacion_serial(A, B, C);
    clock_t fin = clock();

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo (serial): %.4f segundos\n", tiempo);
    return 0;
}
