/*Realizar un algoritmo que lea 3 números diferentes y
determine el número medio del conjunto de los 3
números*/

#include <stdio.h>

int main() {
    int num1, num2, num3, medio;

    printf("Ingrese tres números diferentes: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        medio = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        medio = num2;
    } else {
        medio = num3;
    }

    printf("El número medio es: %d\n", medio);

    return 0;
}

