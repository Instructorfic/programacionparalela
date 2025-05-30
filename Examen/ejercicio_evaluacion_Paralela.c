#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main() {
int n;

printf("Pon el tamaño de la matriz:\n");

scanf("%d",&n);

printf("\n Ahora pon la cantidad de hilos que vamos a usar:\n");

int m;
scanf("%d",&m);


omp_set_num_threads(m);
int matriz[n][n];
int matriz2[n][n];
int i,j;
double inicio = omp_get_wtime();
#pragma omp parallel for 
for(i=0;i<n;i++) { 
	for(j=0;j<n;j++) {

		matriz[i][j] = j+i*2;
		matriz2[i][j] = matriz[i][j];
	}
}


int matriz_potencia[n][n];

int o;
#pragma omp parallel for
for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
#pragma omp parallel for
	for(o=0;o<n;o++) {
		matriz_potencia[i][j] = matriz_potencia[i][j] + (matriz[i][o] * matriz2[o][j]);
}

		
	}

}
for(i=0;i<n;i++) {
	
	printf("\n");
        
        for(j=0;j<n;j++) {
                printf("%d ",matriz_potencia[i][j]);
        }

}

double fin = omp_get_wtime();

double tiempo = fin-inicio;
printf("Tiempo paralelo: %f segundos\n", tiempo);
return 0;
}
