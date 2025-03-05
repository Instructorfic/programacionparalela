#include <stdio.h>

int main(){
	float lado,area_base,area_lateral,area_total,volumen;
	printf("Ingrese la dimension del lado: ");
	scanf("%f",&lado);
	area_base=lado*lado;
	area_lateral=area_base*4;
	area_total=area_base*6;
	volumen=lado*lado*lado;

	printf("Area de la base: %f\n",area_base);
	printf("Area lateral: %f\n",area_lateral);
	printf("Area total: %f\n",area_total);
	printf("Volumen: %f\n",volumen);
	return 0;
}
