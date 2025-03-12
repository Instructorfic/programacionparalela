/*
OBJETIVO: Realizar un programa que lea 2 números x y n y
calcule la suma:  1+ x¹+...+x^n
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 12-03-2025
*/

#include <stdio.h>
#include <math.h>

int main(){
	int x, n;

	printf("Teclee el valor de (x n): ");
	scanf("%d",&x);
	scanf("%d",&n);

	//calculos
	double resultado=0;
	for(int i=1;i<n;i++){
		resultado=double pow(x,n)+resultado;
	}

	printf("El resultado de la suma es: %f\n",resultado);

	return 0;
}
