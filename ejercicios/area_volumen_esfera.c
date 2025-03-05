#include<stdio.h>
#include<math.h>

int main(){
	float radio, area, volumen;
	printf("Ingresa el radio de la esfera: ");
	scanf("%f",&radio);

	//cálculos
	area=4*M_PI*pow(radio,2);
	volumen=(4*M_PI*pow(radio,3))/3;

	//impresión
	printf("El área es: %f\n",area);
	printf("El volumen es: %f\n",volumen);

	return 0;
}
