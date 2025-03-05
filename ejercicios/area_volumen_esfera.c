#include<stdio.h>
#define PI 3.1416
int main(){
	float radio;
	float volumen;
	float area;

	printf("Ingrese el radio de la esfera: ");
	scanf("%f", &radio);

	area=4*PI*(radio*radio);
	volumen=4/3*PI*(radio*radio*radio);

	printf("El area es: %f",area);
	printf("\nEl volumen es: %f\n",volumen);
}
