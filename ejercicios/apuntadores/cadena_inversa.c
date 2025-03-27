/*
OBJETIVO: crear una función char *rev(char*) que dado un vector
de caracteres retorne una cadena inversa de la cadena original recibida.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 26/03/2025
*/

#include <stdio.h>
#include<string.h>

void rev(char *cadena, int pos){
	char cadena_volteada[pos], c, *l;
	l = cadena;

	for(int i=0;i<=pos;i++){
		l=cadena+pos-i;
		cadena_volteada[i] = *l;
		c=cadena_volteada[i];
		printf("%c",c);
	}
	printf("\n");
}

int main(){
	char cadena[] = "exist for again";
	char *apuntador = &cadena[0];

	int tamano;
	tamano = strlen(cadena);

	rev(apuntador, tamano);

	//printf("");
	//scanf("%",&);

	return 0;
}
