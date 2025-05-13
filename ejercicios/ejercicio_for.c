#include <stdio.h>
#include <omp.h>

int main(){
	int totalElementos;
	printf("Ingrese el numero de elementos del arreglo: ");
	scanf("%d",&totalElementos);
	int arreglo[totalElementos];
	printf("Ingrese el valor de cada elemento\n");
	for(int i=0;i<totalElementos;i++){
		printf("Elemento %d: ",i+1);
		scanf("%d",&arreglo[i]);
	}
	#pragma omp parallel for
	for(int i=0;i<totalElementos;i++){
		arreglo[i]=arreglo[i]*arreglo[i];
	}

	printf("Valores al cuadrado\n");
	for(int i=0;i<totalElementos;i++){
		printf("Elemento %d: %d\n",i+1,arreglo[i]);
	}
	return 0;
}

