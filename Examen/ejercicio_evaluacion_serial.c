#include<stdio.h>
#include<omp.h>

int main() {
int n;

printf("Pon el tamaño de la matriz:\n");

scanf("%d",&n);

int matriz[n][n];
int matriz2[n][n];
int i,j;
double inicio = omp_get_wtime();
for(i =0;i<n;i++) {
	for(j=0;j<n;j++) {
		matriz[i][j]=j+i*2;
		matriz2[i][j] = matriz[i][j];
	}
}


int matriz_potencia[n][n];

int o;
for(i=0;i<n;i++) {
	for(j=0;j<n;j++) {
	for(o=0;o<n;o++) {
		matriz_potencia[i][j] = matriz_potencia[i][j] + (matriz[i][o] * matriz2[o][j]);

		}
	}

}
for(i =0;i<n;i++) {
		printf("\n");
        for(j=0;j<n;j++) {
                printf("%d ",matriz_potencia[i][j]);
        }
}
double fin = omp_get_wtime();

double tiempo = fin -inicio;

printf("El tiempo de ejecucion del programa fue: %f",tiempo);


return 0;
}
