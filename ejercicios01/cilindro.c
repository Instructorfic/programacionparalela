/*
Especificaciones:
Escribe un programa que dada las dimensiones de
un cilindro hueco (radio interior, radio exterior y
altura) determine la superficie y el volumen.
Fecha:04/03/25
*/
#include <stdio.h>

int main(){
	const float pi=3.1416;
	float radio_inf, radio_ext, altura, volumen_int, volumen_ext, superficie, area_inf, area_ext;
	printf("Proporcione el valor del radio inferior: ");
	scanf("%f", radio_inf);
	printf("Proporcione el valor del radio exterior: ");
	scanf("%f", radio_ext);
	printf("Proporcione el valor de la altura: ");
	scanf("%f", altura);
	//volumen interior
	area_inf=pi * radio_inf * radio_inf;
	volumen_int=area_inf*altura;
	//volumen exterior
	area_ext=pi * radio_ext * radio_ext;
	volumen_ext=area_ext*altura;
return 0;
}
