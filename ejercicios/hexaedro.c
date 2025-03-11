#include <stdio.h>
int main(){
	float lado, area_base, area_lateral, area_total, volumen;

	 printf("Ingrese la longitud del lado del hexaedro: \n");
	 scanf("%f", &lado);

	area_base = lado * lado;
	area_lateral = 4 * area_base;
	area_total = 6 * area_base;
	volumen = lado * lado * lado;

	 printf("\nResultados:\n");
	 printf("Área de la base: %f\n", area_base);
	 printf("Área lateral: %f\n", area_lateral);
	 printf("Área total: %f\n", area_total);
	 printf("Volumen: %f\n", volumen);

	return 0;
}
