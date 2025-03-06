/*
Programa para identificar los triangulos que hay con las medidas que le introducen
Fecha:27/02/2025
*/

#include <stdio.h>

int main(){
	int lado1, lado2, lado3;
	printf("introduce el primer lado del triangulo: \n");
	scanf("%d", &lado1 );
        printf("introduce el segundo lado del triangulo: \n");
        scanf("%d", &lado2 );
        printf("introduce el tercer lado del triangulo: \n");
        scanf("%d", &lado3 );

	if(lado1 == lado2 && lado2 == lado3){
		printf("El triangulo es equilatero. \n");
	}
	else if(lado1 != lado2 && lado2 != lado3){
		printf("El trinagulo es escaleno. \n");
	}
	else if(lado1 == lado2 || lado2 == lado3){
	printf("El triangulo es isoceles.\n");
	}
}
