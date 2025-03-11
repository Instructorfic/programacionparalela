/*
OBJETIVO: Realizar un algoritmo que lea 3 números diferentes y
determine el número medio del conjunto de los 3
números.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 11/03/2025
*/

#include <stdio.h>

int main(){
	int a, b, c, medio;
	printf("Teclee 3 números enteros separados por espacio: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);

	//cálculos
	if(a>b && a>c){
		if(b>c){
			medio=b;
		}else{
			medio=c;
		}
	}
	if(b>a && b>c){
		if(a>c){
			medio=a;
		}else{
			medio=c;
		}
	}
	if(c>a && c>b){
		if(a>b){
			medio=a;
		}else{
			medio=b;
		}
	}
	printf("El número de en medio es: %d\n",medio);

	return 0;
}
