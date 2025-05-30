// parcial 3 - versión paralela de la multiplicación de matrices con OpenMP
// emily sofia delgado lopez
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

// PARTE 1: definir el tamaño 
#define tam 100

// PARTE 2: función para llenar una matriz con valores aleatorios del 0 al 99
void llenar_matriz(int m[tam][tam]) {
    for (int f = 0; f < tam; f++) {
        for (int c = 0; c < tam; c++) {
            m[f][c] = rand() % 100;
        }
    }
}

// PARTE 3: función para mulltiplicar las 2 matrices 
void multiplicar_matrices(int mat1[tam][tam], int mat2[tam][tam], int resultado[tam][tam]) {
    #pragma omp parallel for collapse(2)
    for (int f = 0; f < tam; f++) {
        for (int c = 0; c < tam; c++) {
            int suma = 0;
            for (int k = 0; k < tam; k++) {
                suma += mat1[f][k] * mat2[k][c];
            }
            resultado[f][c] = suma;
        }
    }
}

int main() {
    // PARTE 4: declarar las matrices y el tiempo
    int m1[tam][tam], m2[tam][tam], m_res[tam][tam];
    double inicio, fin;

    // PARTE 5: llenar las matrices con valores aleatorios
    srand(time(NULL));
    llenar_matriz(m1);
    llenar_matriz(m2);

    // PARTE 6: medir el tiempo que tarda la multiplicación
    inicio = omp_get_wtime();
    multiplicar_matrices(m1, m2, m_res);
    fin = omp_get_wtime();

    // PARTE 7: mostrar el tiempo total
    printf("Tardé: %.6f segundos (modo paralelo con OpenMP)\n", fin - inicio);

    return 0;
}
