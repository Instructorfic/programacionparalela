/*
OBJETIVO: Escriba un función que tome tres variables (a, b, c) como parámetros separados
y rote los valores almacenados, i.e., a tomará el valor de b, b el de cyc el de a.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 28/03/2025
*/

void rotarValores(int *a, int *b, int *c){
	int comodin= *c;
	*c = *b;
	*b = *a;
	*a = comodin;
}

#include <stdio.h>

int main(){
	int a, b, c;

	printf("Teclee los valores de a, b y c: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	int *ptr1 = &a;
	int *ptr2 = &b;
	int *ptr3 = &c;

	rotarValores(ptr1, ptr2, ptr3);

	printf("Los nuevos valores de a, b y c son: %d, %d, %d\n",a, b, c);

	//printf("");
	//scanf("%",&);

	return 0;
}
