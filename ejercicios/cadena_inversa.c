//Invierte una cadena de caracteres
//Raúl Fernando Cruz Moreno

#include <stdio.h>
#include <string.h>
void rev(char*cadena,char*cadena_inversa,int longitud);

int main(){
	char cadena[]="cadena normal";
	printf("Cadena original: %s\n",cadena);
	int longitud=strlen(cadena);
	char cadena_inversa[longitud+1];
	rev(cadena,cadena_inversa,longitud);
	printf("Cadena invertida: %s\n",cadena_inversa);
	return 0;
}

void rev(char*cadena,char*cadena_inversa,int longitud){
	for(int i=longitud-1;i>=0;i--){
		*(cadena_inversa+(longitud-i-1))=*(cadena+i);
	}
	*(cadena_inversa+longitud)='\0';

}
