///Francisco Javier Para Leon

//Actividad:

//Desarrolle una función que reciba dos apuntadores de cadena de caracteres,
//para copiar de la primera a la segunda un numero determinado de caracteres
//desde la derecha (debe asignar a la segunda cadena la memoria exactamente
//necesaria).

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void voltear_cadena(char *cadena_a, char *cadena_b, int posicion, int cantidad, int tamano_a, int tamano_b, int *numero) {


	if(posicion>tamano_a) {
posicion=tamano_a;
}	
	int posicion_final = posicion-cantidad+1;
	if(posicion_final <= 0) {
	posicion_final = 0;
	cantidad=posicion;
	}
int nuevo_tamano = cantidad + tamano_b;
char *variable_a;
char *variable_b;

cadena_b = realloc(cadena_b,nuevo_tamano*sizeof(char));
int contador =1;
int i;
for(i=posicion;i>=posicion-cantidad+1;i--){ 
variable_a = cadena_a+i;
variable_b = cadena_b+contador+tamano_b;

*variable_b = *variable_a; 
contador=contador+1;
}




*numero = nuevo_tamano;
}


int main() {

char cadena_a[] = "Hola k ase.";



char cadena_temporal[] = "Segunda cadena_";
int tamano_cadena;
tamano_cadena = strlen(cadena_temporal);

//printf("El tamaño de l acadena es: \n");
//printf("%d",tamano_cadena);
char *cadena_b;
cadena_b= (char *)malloc((100) * sizeof(char));

if (cadena_b==NULL) {
printf("Error concluyendo el programa.");
return 1;
}
int i;

strcpy(cadena_b,cadena_temporal);


//printf("El string es: \n");
//printf("%s",cadena_b);
char *apuntador_a = &cadena_a[0]; 
printf("Pon la posicion en la cual quieres empezar a agarrar datos.");

int posicion;

scanf("%d",&posicion);

printf("Ahora pon cuantos valores quieres tomar.");
int cantidad;

scanf("%d",&cantidad);

int a = strlen(cadena_a);


int numero = tamano_cadena; //Esto es para almacenar el tamaño de la cadena despues de modificarlo;
int *apuntador_numero = &numero; //Y este es el apuntador del numero

voltear_cadena(apuntador_a, cadena_b, posicion, cantidad,a,tamano_cadena,apuntador_numero);

printf("\n------------------");

printf("imprimiendo la cadena modificada:\n");


//Imprimir cadena modificada


for(i=0;i<=numero;i++) {

printf("%c",cadena_b[i]);
}
return 0;
}
