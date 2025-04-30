#include<stdio.h>
#include<stdlib.h>

void agregarNombre(char *nombreAlumno);
void idAlumno(int *id);

	//DATOS DEL ALUMNO
	struct funcion{
	 int *id[5];
	 char *nombreAlumno[5];
};

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
	
	//TOMA DE DESICIONES 
	scanf("%d",&tomaDesicion);
	
	if(tomaDesicion == 3){
	printf("SALIENDO DEL PROGRAMA...\n");
	return 1;
	}

	if(tomaDesicion == 1){
	printf("Ingresa el ID del alumno: \n");
	scanf("%d",&id);

	printf("Ingresa el nombre del alumno: \n");
	scanf("%s",&nombreAlumno);

	printf("---Se ha guardado los datos del alumno---\n");
	}
	if(tomaDesicion == 2){
	printf(":::AQUI DEBERIA PONIRSE ALGO:::");
	}
}
