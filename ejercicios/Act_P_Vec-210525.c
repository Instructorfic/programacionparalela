#include <stdio.h>
#include <omp.h>

int main(){
	//VARIABLES

	int tamanio;
	int arreglo[tamanio];
	int contador=99;
	int buscarNumero;
	
	printf("Ingrese el tamaño de el arreglo:%d\n",tamanio);
	scanf("%d",&tamanio);
	
	
	//PARALELO
	 #pragma omp parallel for shared (contador,arreglo)

			for (int i=0; i < contador; i++){
			arreglo[i]=i;
			printf ("Valor asignado en el arreglo[%d]: %d\n",i+1,arreglo[i]);
			}
	//BUSCAR NUMERO

	printf("Ingrese un número para buscar en base la región que ingreso para el tamaño de arreglo: \n");
	scanf("%d",&buscarNumero);
	
	for (int i=0; i < contador;i++){
	if(buscarNumero == arreglo[i])
	printf("Se ha encontrado el número buscado en la posición [%d]: %d\n",i+1,arreglo[i]);
	} 



return 0;
} 
