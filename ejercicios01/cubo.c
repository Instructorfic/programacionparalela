/*
Especificaciones:
Implemente un programa que al recibir como dato
la dimensión del lado de un hexaedro, calcule el
área de la base el área lateral, el área total y el
volumen.
Fecha:05/03/25
*/
#include <stdio.h>

int main(){
	int lado, area, area_total, volumen;
	printf("Proporcione la medidad del lado: ");
	scanf("%d", &lado);
	area=lado*lado;
	area_total=area*6;
	volumen=area*lado;
	printf("El area es: %d\n", area);
	printf("El area total es: %d\n", area_total);
	printf("El volumen es: %d\n", volumen);
return 0;
}
