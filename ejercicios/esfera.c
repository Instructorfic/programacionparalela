#include <stdio.h>
#include <math.h>
int main(){
	float radio,volumen,area;
	printf("Ingrese el radio de la esfera: ");
	scanf("%f",&radio);

	area=4*M_PI*radio*radio;
	volumen=(4*M_PI*radio*radio*radio)/3;

	printf("Area: %f \nVolumen: %f \n",area,volumen);
	return 0;
}
