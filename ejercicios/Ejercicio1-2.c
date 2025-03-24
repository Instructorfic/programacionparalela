#include<stdio.h>
void main(){
	//VARIABLES
	float num1,num2,num3,medio;
	//ENTRADA DE DATOS
	printf("Ingresa el Primer numero:");
	scanf("%f",&num1);
	printf("Ingresa el Segundo numero:");
        scanf("%f",&num2);
	printf("Ingresa el Tercer numero:");
        scanf("%f",&num3);

	//DETERMINAR LA MEDIANA
	 if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)) {
        medio = num1;
    }
    if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)) {
        medio = num2;
    }
    if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
        medio = num3;
    }

	printf("El numero de la mediana es: %f\n",medio);
}
