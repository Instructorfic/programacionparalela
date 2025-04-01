#include<stdio.h>
#include <string.h>

char* rev(char* str){
	int len = strlen(str);
	char temp;

	for(int i=0;i<len/2;i++){
	temp=str[i];
	str[i]=str[len -1-i];
	str[len-1-i]=temp;
	}

	return str;
}

int main(){
	char cadena[100];
	printf("Ingresa una cadena:\n");
	fgets(cadena, sizeof(cadena),stdin);

	cadena[strcspn(cadena,"\n")]=0;
	
	printf("La cadena invertida es: %s\n",rev(cadena));
	return 0;
}
