/*Realizar un algoritmo que lea 3 números diferentes y
determine el número medio del conjunto de los 3
números.*/
#include <stdio.h>

int main() {
    int a, b, c, medio;

    printf("Ingrese tres números distintos: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        medio = a;
    else if ((b > a && b < c) || (b < a && b > c))
        medio = b;
    else
        medio = c;

    printf("El número medio es: %d\n", medio);

    return 0;
}
