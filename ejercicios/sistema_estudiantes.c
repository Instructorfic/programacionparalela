//Raúl Fernando Cruz Moreno
//Sistema gestor de estudiantes usando apuntadores
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANO 40

//Crear estructura Estudiante
struct Estudiante{
	int matricula;
	char nombre[TAMANO];
	struct Estudiante* siguiente;
};

void menu(struct Estudiante *cabeza);
void insertarEstudiante(struct Estudiante **pr_cabeza);
void mostrarEstudiantes(struct Estudiante *pr_cabeza);
void limpiar(struct Estudiante *pr_cabeza);

int main(){
	//Crear apuntador a la cabeza de la lista
	struct Estudiante *cabeza=NULL;
	menu(cabeza);
	return 0;
}

void menu(struct Estudiante *cabeza){
	int opcion;
	opcion=0;
	//Menu de opciones
	while(opcion!=3){
		printf("Seleccione la acción a realizar: \n");
		printf("1.-Añadir un estudiante\n2.-Mostrar estudiantes\n3.-Salir\n");
		scanf("%d",&opcion);

		switch(opcion){
			case 1:insertarEstudiante(&cabeza);break;
			case 2:mostrarEstudiantes(cabeza);break;
			case 3:limpiar(cabeza);break;
			default: printf("Ingrese una opción valida\n");

		}
	}

}

void insertarEstudiante(struct Estudiante **pr_cabeza){
	//Asignacion de memoria para el nuevo Estudiante en la lista
	struct Estudiante *nuevoEstudiante=malloc(sizeof(struct Estudiante));
	
	//Verificar errores de asignacion de memoria
	if(nuevoEstudiante==NULL){
		printf("Error al asignar memoria\n");
		exit(1);
	}
	
	int matricula;
	char nombre[TAMANO];
	//Entrada de los datos a ingresar
	printf("Ingresa la matricula:");
	scanf("%d",&matricula);
	printf("Ingresa el nombre del estudiante:");
	scanf("%s",&nombre);

	//Asignación de los datos a los miembros de la estructura
	nuevoEstudiante -> matricula = matricula;
	strcpy(nuevoEstudiante->nombre,nombre);
	nuevoEstudiante -> siguiente = NULL;

	//Si es el primer estudiante, asignarlo como cabeza, y acabar la operacion
	if(*pr_cabeza == NULL){
		*pr_cabeza=nuevoEstudiante;
		return;
	}
	
	//Recorrer lista para encontrar el ultimo nodo
	struct Estudiante *ultimo = *pr_cabeza;
	while(ultimo->siguiente){
		ultimo = ultimo->siguiente;
	}
	//Asignar el siguiente nodo al nuevo Estudiante
	ultimo->siguiente = nuevoEstudiante;
}

void mostrarEstudiantes(struct Estudiante *pr_cabeza){
	//Verificar que la lista no este vacia
	if(pr_cabeza==NULL){
		printf("No se ha ingresado los datos de ningun estudiante\n");
		return;
	}
	printf("\n");
	//Imprimir datos
	struct Estudiante *actual = pr_cabeza;
	while(actual){
		printf("Matricula:%d\tNombre:%s\n",actual->matricula,actual->nombre);
		actual=actual->siguiente;
	}
	printf("\n");
}
void limpiar(struct Estudiante *pr_cabeza){
	//Si no hay datos,cancelar operacion
	if(pr_cabeza==NULL)
		return;
	struct Estudiante *actual = pr_cabeza;
	struct Estudiante *siguiente = pr_cabeza->siguiente;
	//Liberar memoria
	while(siguiente){
		free(actual);
		actual=siguiente;
		siguiente=actual->siguiente;
	}
	free(actual);
	printf("Memoria liberada\n");

}
