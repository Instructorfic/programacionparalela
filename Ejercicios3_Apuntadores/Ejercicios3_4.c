#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void copiar_cadena(int cantidad_a_mover, char *apunta_a, char *apunta_b, int a) {
	
	


	int i;
	char *l;
	char *j;
	
	for (i=0;i<=cantidad_a_mover;i++) {
	l=apunta_b+i;
	j=apunta_a+a-i;

	*l = *j;

	}	

}


int main() {
char cadena_a[] = "Hola k ase";
//char caracter = cadena_a[0];
//printf("%c",caracter);
char *apuntador_a = &cadena_a[0];
int a = strlen(cadena_a);
printf("Pon la cantidad de caracteres que deseas voltear.");
int cantidad;
scanf("%d",&cantidad);
cantidad=cantidad+1;
if(cantidad > a) {
cantidad = a;
}

//char *cadena_b=(char *) malloc(cantidad * sizeof(char));
char cadena_b[cantidad];

if (cadena_b == NULL) {
printf("Ocurrio un error al asignar memoria \n");
return 1;
}

char *apuntador_b; 
apuntador_b = &cadena_b[0];
copiar_cadena(cantidad,apuntador_a,apuntador_b,a);

for(int i=0;i<cantidad;i++) {

printf("%c",cadena_b[i]);
}
if(cantidad == a) {
printf("%c",cadena_a[0]);
}
return 0;

}

