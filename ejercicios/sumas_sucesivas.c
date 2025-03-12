/*
OBJETIVO: Escriba un programa que lea una hora (hora,
minutos, segundos) y diga la hora que será un
segundo después.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 12-03-2025
*/

#include <stdio.h>

int main(){
	int a, b;

	printf("Teclee 2 eneteros (a  b): ");
	scanf("%d",&a);
	scanf("%d",&b);

	//calculos
	int resultado=0;
	for(int i=0;i<b;i++){
		resultado+=a;
	}
	printf("El producto de ambos números es: %d\n",resultado);

	return 0;
}
