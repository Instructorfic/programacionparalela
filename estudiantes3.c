#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    	int id;
    	char nombre[50];
} Estudiante;

//Agregar un nuevo estudiante
Estudiante* agregar_estudiante(Estudiante* lista, int* tamano) {
    	lista = realloc(lista, (*tamano + 1) * sizeof(Estudiante));
    	if (!lista) {
        	printf("Error de memoria.\n");
        	exit(1);
    	}
    	printf("Ingrese ID: ");
    	scanf("%d", &lista[*tamano].id);
    	getchar();
    	printf("Ingrese nombre: ");
    	fgets(lista[*tamano].nombre, 50, stdin);
    	lista[*tamano].nombre[strcspn(lista[*tamano].nombre, "\n")] = 0;
    	(*tamano)++;
    	return lista;
}

//Mostrar la lista de estudiantes
void mostrar_estudiantes(Estudiante* lista, int tamano) {
    	for (int i = 0; i < tamano; i++)
        	printf("ID: %d, Nombre: %s\n", lista[i].id, lista[i].nombre);
}

int main() {
	Estudiante* lista = NULL;
    	int tamano = 0, opcion;

    	do {
        	printf("\n1. Agregar estudiante\n2. Mostrar estudiantes\n3. Salir\nSeleccione una opción: ");
        	scanf("%d", &opcion);
        	getchar();

        	if (opcion == 1) lista = agregar_estudiante(lista, &tamano);
        	else if (opcion == 2) mostrar_estudiantes(lista, tamano);
    	} while (opcion != 3);

    	free(lista); //LIBERAR MEMORIA 
    	return 0;
}
