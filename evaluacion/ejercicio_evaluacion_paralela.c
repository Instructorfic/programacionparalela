#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define tamano 9

int main(){
int i,j,k;
double inicio,fin;

//matrices
int matriz1[tamano][tamano];
int matriz2[tamano][tamano];
int resultado[tamano][tamano]={0};

for(i=0;i<tamano;i++){
for(j=0;j<tamano;j++){
matriz1[i][j]=rand()%90+1;
matriz2[i][j] = rand()%90+1;
}}

inicio=omp_get_wtime();

//multiplicación paralela de matrices
#pragma omp parallel for private(j,k)
for(i=0;i<tamano;i++){
for(j=0;j<tamano;j++){
for(k=0;k<tamano;k++){
resultado[i][j] += matriz1[i][k] * matriz2[k][j];
}}}


for(i=0;i<tamano;i++){
for(j=0;j<tamano;j++){
for(k=0;k<tamano;k++){
resultado[i][j] += matriz1[i][k] * matriz2[k][j];
}}}

fin=omp_get_wtime();

printf("tiempo de ejecución: %f segs\n",fin-inicio);

return 0;
}



