#include <stdio.h>
#include <stdlib.h>

int main(){

	int cantNumeros;
	printf("Cuantos numeros desea ingresar? ");
	scanf("%d", &cantNumeros);

	//ASIGNACION DINAMICA DE MEMORIA PARA N ENTEROS
	int *arregloNumeros = (int *)malloc(cantNumeros * sizeof(int));

	if(arregloNumeros == NULL){
		printf("ERROR EN ASIGNACION DE MEMORIA \n");
	return 1;
	}

	//LECTURA DE LOS NUMEROS ENTEROS
	printf("Introduce %d numeros: \n", cantNumeros);
	for (int i=0; i<cantNumeros; i++){
	printf("Numero %d:", i+1);
	scanf("%d", &arregloNumeros[i]);
	}

	//CALCULAR EL PROMEDIO
	int suma = 0;
	for (int i=0; i<cantNumeros; i++){
	suma += arregloNumeros[i];
	}

	float promedio = (float) suma / cantNumeros;
	printf("El promedio es: %.2f\n", promedio);

	//LIBERAR MEMORIA
	free(arregloNumeros);
	arregloNumeros = NULL;

return 0;
}
