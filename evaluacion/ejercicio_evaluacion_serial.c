#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamano 9

int main(){
int i,j,k;
clock_t inicio,fin;
double tiempoej;

//matrices
int matriz1[tamano][tamano];
int matriz2[tamano][tamano];
int resultado[tamano][tamano]={0};

for(i=0;i<tamano;i++){
for(j=0;j<tamano;j++){
matriz1[i][j]=rand()%90+1;
matriz2[i][j] = rand()%90+1;
}}

inicio=clock();

//multiplicación de matrices
for(i=0;i<tamano;i++){
for(j=0;j<tamano;j++){
for(k=0;k<tamano;k++){
resultado[i][j] += matriz1[i][k] * matriz2[k][j];
}}}

fin=clock();
tiempoej=((double)(fin-inicio))/CLOCKS_PER_SEC;

printf("tiempo de ejecución: %f segs\n",tiempoej);

return 0;
}
