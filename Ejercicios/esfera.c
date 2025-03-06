#include <stdio.h>


void main(){
float r;
printf("Introduzca el radio \n");
scanf("%f",&r);

float volumen;
float area;

area= 4 * 3.1416 * ( r * r);

volumen= (4.0 / 3.0) * 3.1416 * (r * r * r);

printf("El area es %f \n",area);
printf("El volumen es %f \n",volumen);
}
