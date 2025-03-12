#include <stdio.h>


void main(){
float radio;
printf("Introduzca el radio \n");
scanf("%f",&radio);

float elvolumen;
float elarea;

elarea= 4 * 3.1416 * ( radio * radio);

elvolumen= (4.0 / 3.0) * 3.1416 * (radio * radio * radio);

printf("El area es %f \n",elarea);
printf("El volumen es %f \n",elvolumen);
}
