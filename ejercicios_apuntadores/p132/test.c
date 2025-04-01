#include <stdio.h>

int main() {
	int *cadena = "hola";
	int *cadena2 = "hola";
	for (int i=0; i<16; i++) {
		printf("%c", ((char *)cadena)[i]);
	} printf("\n");
}
