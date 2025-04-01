//emily delgado
//EJERCICIO2 - Realizar un algoritmo que lea 3 números diferentes  y calcular el numero medio

//parte1 informacion de usuario y variables
#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("primer número: ");
    	scanf("%d", &num1);
    printf("segundo número: ");
    	scanf("%d", &num2);
    printf("tercer número: ");
        scanf("%d", &num3);

//parte2 que sean diferentes y calcular numero medio de los 3 numeros
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("deben ser diferentes.\n");
	return 1;
	}
//hacer las salidas para los numeros medios
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        printf("el numero medio es  %d\n", num1);

	} else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        printf("El número medio es: %d\n", num2);
    	} else {
        printf("El número medio es: %d\n", num3);
    }

    return 0;
}
