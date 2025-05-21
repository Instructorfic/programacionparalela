//Programa que busca un númer dentro de un arreglo
#include <stdlib.h>
#include <stdio.h>
#include <omp.h>
#include <time.h>
int main(){
	int i,tamano,busqueda,posicionEncontrado,valorAleatorio;
	printf("Ingrese el tamaño del arrelgo: ");
	scanf("%d",&tamano);
	int arreglo[tamano];
	printf("Ingrese el numero a buscar: ");
	scanf("%d",&busqueda);
	srand(time(NULL));
	for(i=0;i<tamano;i++){
		valorAleatorio=rand()%100;
		arreglo[i]=valorAleatorio;
	}
	for(i=0;i<tamano;i++){
		printf("%d: %d\n",i,arreglo[i]);
	}
	posicionEncontrado =-1;
	#pragma omp parallel for
	for(i=0;i<tamano;i++){
		if(busqueda==arreglo[i]){
			posicionEncontrado=i;
		}
	}

	if(posicionEncontrado==-1)
		printf("No existe el valor en el arreglo \n");
	else
		printf("Valor %d encontrado en la posicion %d del arreglo\n",busqueda,posicionEncontrado);

	
	return 0;
}
