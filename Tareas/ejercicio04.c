/*Desarrolle un programa que dados a y b enteros,
informar el producto de ambos por sumas
sucesivas.*/
#include <stdio.h>

int main() {
    int a, b, producto = 0;

    printf("Ingrese dos enteros (a, b): ");
    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++) {
        producto += a;
    }

    printf("El producto de %d y %d es: %d\n", a, b, producto);

    return 0;
}


