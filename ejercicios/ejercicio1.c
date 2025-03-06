#include <stdio.h>
int main(){
	float lado=0.0;
	float area_base,area_lateral,area_total,volumen;
	printf("Ingresa la dimension de un lado del hexaedro: \n");
	scanf("%f", &lado);

	area_base=lado*lado;
	area_lateral=4*lado*lado;
	area_total=6*lado*lado;
	volumen=lado*lado*lado;


	printf("El area de la base es: %f \n",area_base);
	printf("El area de la superficie lateral es: %f \n",area_lateral);
 	printf("El area total es:%f \n",area_total);
 	printf("El volumen es: %f \n",volumen);
}
