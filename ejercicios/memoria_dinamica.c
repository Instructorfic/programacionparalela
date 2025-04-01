#include<stdio.h>
#include<stdlib.h>

int main(){

	//VARIABLES
	int cantidadNumeros;


	//ENTRADA DE DATOS
	printf("Cuantos numeros deseas ingresar: ");
	scanf("%d",&cantidadNumeros);

	//PROCESOS Y SALIDAS

	//Asignacion dinamica de memoria para n enteros.
	int *arregloNumeros = (int *)malloc(cantidadNumeros * sizeof(int));

	if(arregloNumeros == NULL){
		printf("Ocurrio un error al asignar memoria\n");
	return 1;
	}

	//Lectura de los numeros
	printf("Proporcione %d numeros:\n",cantidadNumeros);

	for(int i=0;i<cantidadNumeros;i++){
		printf("Numero %d: ",i+1);
		scanf("%d",&arregloNumeros[i]);
	}

	//Calculo del promedio
	int suma=0;
	for(int i=0;i<cantidadNumeros;i++){
		suma+=arregloNumeros[i];
	}

	float promedio=(float) suma/cantidadNumeros;
	printf("EL promedio es: %.2f\n",promedio);


	//Liberar la memoria
	free(arregloNumeros);
	arregloNumeros=NULL;

return 0;
}
