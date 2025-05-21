#include <stdio.h>
#include <omp.h>

int main(){
int arreglo[100];
int numero;
#pragma omp parallel for
	for(int i=0;i<numero;i++){
	printf("Escribe el numero:\n %d", numero);
	scanf("%d", numero);
}
return 0;
}
