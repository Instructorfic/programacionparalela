#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Typedef struct estudiantes{
	int matricula;
	char nombre;

	struct nodo *sig;
} TNodo;

void Agregar(){
	
}

void Listar(){
	
}

#define TAMANO 40

int main() {
	int opcion;
	char nombre_estudiante[TAMANO];
	char *letra = &nombre_estudiante[0];
	TNodo*listaEstudiantes;

	while(opcion != 3){
		printf("1. Agregar estudiante a la lista\n2. Mostrar lista estudiantes\n3. Salir\n\n");
		scanf("%d", &opcion);

		switch(opcion){
			case 1:
				printf("Nombre: ");
				scanf("%c",&nombre_estudiante);
				//Agregar();
				for(int i=0;i<TAMANO;i++){
					printf("%c",letra);
					letra = letra + i;
				};
				break;
			case 2:
				break;
			case 3:
				break;
			default:
				printf("Opción Invalida\n");
		}
	}

	/*
	// Asignación dinámica de memoria para 'n' enteros
	int *arregloNumeros = (int *)malloc(cantidadNumeros * sizeof(int));
	if (arregloNumeros == NULL) {  // Verificación de errores
		printf("Error al asignar memoria\n");
		return 1;
	}

	// Lectura de los números
	printf("Introduce %d números:\n", cantidadNumeros);
	for (int i = 0; i < cantidadNumeros; i++) {
		printf("Número %d: ", i + 1);
	scanf("%d", &arregloNumeros[i]);
	}

	// Cálculo del promedio
	int suma = 0;
	for (int i = 0; i < cantidadNumeros; i++) {
		suma += arregloNumeros[i];
	}
	float promedio = (float)suma / cantidadNumeros;

	printf("El promedio es: %.2f\n", promedio);

	// Liberar memoria asignada
	free(arregloNumeros);
	arregloNumeros = NULL;  // Apuntador nulo después de liberar memoria
	*/

	return 0;
}
