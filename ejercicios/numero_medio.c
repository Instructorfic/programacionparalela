// Genesis Fabiola Soto Garcia
/*Realizar un algoritmo que lea 3 números diferentes y
determine el número medio del conjunto de los 3
números.*/

#include <stdio.h>

int main(void) {

    int a, b, c;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    printf("Ingrese el valor de c: ");
    scanf("%d", &c);

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("El numero medio es: %d\n", a);
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        printf("El numero medio es: %d\n", b);
    }
    else {
        printf("El numero medio es: %d\n", c);
    }
    return 0;
}