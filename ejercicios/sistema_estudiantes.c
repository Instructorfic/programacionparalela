//Ejercicio. Sistema para gestión de los datos de estudiantes utilizando memoria dinámica.

/*
 Descripcion. EL programa debe permitir al usuario agregar estudiantes a un catálogo,
mostrar la lista de estudiantes y eliminar la memoria utilizada al final.
Cada estudiante tendra un identificador(matrícula) y un nombre.
*/

/*
Requisitos del programa.
1. Utilizar estructuras dinámicas para gestionar la lista de estudiantes.
2. Implementar funciones para:
 2.1 Agregar un nuevo estudiante.
 2.2 Mostrar todos los estudiantes.
 2.3 Liberar la memoria utilizada.

Utilizar funciones como malloc, realloc y free para manejo de la memoria.
*/

#include<stdio.h>
#include<stdlib.h>

void agregarNombre(char *nombreAlumno);
void idAlumno(int *id);

struct estudiante{
	int nombre[5];
	int matricula[5];
};

int main(){

	//VARIABLES
	int decision=0;
	int id=0;
	char nombreAlumno;

	//ENTRADA DE DATOS
	printf("Selecione una opcion.");
	printf("\n1. Agregar alumno\n2. Mostrar catálogo\n3. Salir\n");
	scanf("%d",&decision);

	//PROCESOS Y SALIDAS
	while(){
	printf("Selecione una opcion.");
	printf("\n1. Agregar alumno\n2. Mostrar catálogo\n3. Salir\n");
	scanf("%d",&decision);
	}


}
