#include <stdio.h>

int main() {
    int a, b;
    int cociente = 0, resto;

    printf("Ingresa el valor de a: ");
    scanf("%d", &a);
    printf("Ingresa el valor de b: ");
    scanf("%d", &b);

    resto = a;

    while (resto >= b) {
        resto -= b;
        cociente++;
    }

    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);

    return 0;
}
