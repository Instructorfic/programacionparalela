#include <stdio.h>

void main(){

	float num1,num2,num3,M;
	printf("Ingresa los numeros: \n");
	printf("Ingresa el primer numero:");
	scanf("%f",&num1);
	printf("Ingresa el segundo numero:");
	scanf("%f",&num2);
	printf("Ingresa el tercer numero");
	scanf("%f",&num3);
	
	//Imprimir los numeros ingresados
	printf("Los numeros ingresados son \n");
	printf("%f",num1);
	printf("%f",num2);
	printf("%f",num3);

	//HACER LA MEDIANA
	M=(num1+num2+num3);

	printf("%f",M);
}
