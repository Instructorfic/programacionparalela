#include<stdio.h>
#include<stdlib.h>

int main(){

	//DEFINICION DE VARIABLES
	int cantidadNumeros;
	printf("¿Cuantos numeros deseas proporcionar? \n");
	scanf("%d",&cantidadNumeros);
	
	//ASIGNACION DINAMICA DE MEMORIA PARA N ENTEROS
	int *arregloNumeros=(int *)malloc(cantidadNumeros * sizeof(int));
	if(arregloNumeros == NULL){
	printf("Ocurrio un error al asignar memoria\n");
	return 1;
	}
	//LECTURA DE LOS NUMEROS ENTEROS
	printf("Proporciona  %d numeros: \n",cantidadNumeros);
	
	for(int i=0; i< cantidadNumeros;i++){
	printf("Numero %d: ",i+1);
	scanf("%d",arregloNumeros);
	}

	//CALCULO DEL PROMEDIO
	int suma=0;
	for(int i=0;i<cantidadNumeros;i++){
	suma += arregloNumeros[i];
	}
	
	float promedio=(float) suma / cantidadNumeros;
	printf("El promedio es: %.2f\n",promedio);

	//LIBERAR LA MEMORIA
	free(arregloNumeros);
	arregloNumeros=NULL;
	
return 0;
}
