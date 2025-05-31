#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main()
{
	int n;
	printf("Ingrese el tamaño de las matrices: ");
	scanf("%d",&n);
	int matriz1[n][n];
	int matriz2[n][n];
	int matrizResultado[n][n];
	//Rellenar matrices
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matriz1[i][j]=i+j*2;
			matriz2[i][j]=i+j*3;
		}
	}
	/* //Imprimir matrices a multiplicar
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",matriz1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",matriz2[i][j]);
		}
		 printf("\n");
	}
	printf("\n");
	*/
	//Multiplicacion de las matrices
	int sumaElementoMatriz;
	double tiempoInicio=omp_get_wtime();
	#pragma omp parallel for
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sumaElementoMatriz=0;
			#pragma omp parallel for reduction(+:sumaElementoMatriz)
			for(int k=0;k<n;k++){
				sumaElementoMatriz+=matriz1[i][k]*matriz2[k][j];
			}
			matrizResultado[i][j]=sumaElementoMatriz;
		}
	}
	
    	double tiempoFin=omp_get_wtime();
	 //Imprimir matriz resultante
	printf("Matriz resultante\n");
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",matrizResultado[i][j]);
		}
	printf("\n");
	}
    	printf("Tiempo de ejecucion: %f segundos\n",tiempoFin-tiempoInicio);
	return 0;
}
