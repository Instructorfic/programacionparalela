#include<stdio.h>
void main(){
   float  area;
   float volumen;
   int radio;
	printf("ingrese el valor del radio \n");
	scanf("%d", &radio);
	area = 4 * 3.14 * (radio * radio);
	volumen = 4/3 * 3.14 * (radio * radio * radio);
	printf("%f\n", area);
	printf("%f\n", volumen);

}
