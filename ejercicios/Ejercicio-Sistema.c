#include<stdio.h>
#include<stdlib.h>

int funcion(int *id,char *nombreAlumno){

	struct *id=0;
	struct *nombreAlumno;
}

int main(){

	//VARIABLES
	int tomaDesicion;
	int id=0;
	char nombreAlumno;
	//SOLICITAR AL USUARIO LA FORMA
	printf("Eliga una opcion:\nDel 1 a 3.\n");
	printf("---Menu---\n");
	printf("1) Ingresar el nombre del alumno\n");
	printf("2) Mostrar los alumnos almacenados\n");
	printf("3) SALIR DEL PROGRAMA\n");
	
	scanf("%d",&tomaDesicion);
	if(tomaDesicion == 3){
	printf("SALIENDO DEL PROGRAMA...\n");
	return 1;
	}
}
