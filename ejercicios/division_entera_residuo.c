/*
OBJETIVO: Dados dos valores enteros (a, b) determinar el valor
de la división entera y el resto de la división entera
de los mismos (a, b), sin usar los operadores de
división entera ó el de residuo.
NOMBRE: Kevin ALexander Serrano Payán
FECHA: 11/03/2025
*/
#include <stdio.h>
int main(){
	int a, b, entera;
	float residuo;

	printf("Teclea dos valores enteros separados por espacio (a b): ");
	scanf("%d",&a);
	scanf("%d",&b);

	//cálculos
	entera = a / b;
	float a2 = a;
	residuo = (a2/b) - entera;

	printf("\nParte entera: %d\nParte del residuo: %f\n",entera,residuo);

	return 0;
}
