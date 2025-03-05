#include<stdio.h>

int main(){
	float radio_int,radio_ext,alt,area,volumen;

	printf("Ingrese el radio interior: ");
	scanf("%f",&radio_int);
	printf("Ingrese el radio exterior: ");
	scanf("%f",&radio_ext);
	printf("Ingrese la altura: ");
	scanf("%f",&alt);

	area=2*((3.1416*radio_ext*radio_ext)-(3.1416*radio_int*radio_int))+2*3.1416*radio_ext*alt;
	volumen=(3.1416*radio_ext*radio_ext*alt)-(3.1416*radio_int*radio_int*alt);

	printf("Area: %f\n",area);
	printf("Volumen: %f\n",volumen);
	return 0;
}
