#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int **matrix_alloc(int nrows, int ncols) {
	int **matrix = malloc(sizeof(int *) * nrows);
	for (int i=0; i<nrows; i++) {
		matrix[i] = malloc(sizeof(int) * ncols);
	}
	return matrix;
}

void matrix_free(int **matrix, int nrows) {
	for (int i=0; i<nrows; i++) {
		free(matrix[i]);
	}
}

void matrix_print(int **matrix, int M, int N) {
	for (int i=0; i<M; i++) {
		for (int j=0; j<N; j++)
			printf("%d ", matrix[i][j]);
		printf("\n");
	}
}

int **matrix_multiplication(int **A, int **B, int N) {
	int **resultado = matrix_alloc(N, N);

	#pragma omp parallel for
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			resultado[i][j] = 0;
			for (int k=0; k<N; k++) {
				resultado[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	return resultado;
}

int main(int argc, const char **argv) {
	int N = 1000;
	if (argc != 2) {
		printf("Use '%s N' para correr con tamaño de matriz N\n", argv[0]);
		printf("Se usará N = %d\n", N);
	} else {
		N = atoi(argv[1]);
	}

	srand(0); // <- hace los numeros aleatorios fijos
	int **A = matrix_alloc(N, N);
	int **B = matrix_alloc(N, N);
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++) {
			A[i][j] = rand()%11 - 5;
			B[i][j] = rand()%11 - 5;
		}
	}

	printf("Matriz A:\n");
	matrix_print(A, N, N);
	printf("Matriz B:\n");
	matrix_print(B, N, N);

	double start = omp_get_wtime();
	int **C = matrix_multiplication(A, B, N);
	double end = omp_get_wtime();

	printf("El producto AB es:\n");
	matrix_print(C, N, N);
	matrix_free(A, N); matrix_free(B, N); matrix_free(C, N);

	printf("*** Tiempo de corrida ***\n");
	printf("%lf\n", end-start);
	printf("*** Hilos usados ***\n");
	printf("%d\n", omp_get_max_threads());
}
