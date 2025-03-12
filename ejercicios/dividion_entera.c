#include <stdio.h>

int main() {
    int a, b, cociente = 0;

    printf("ingresa los valores de a y b:");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("error: no se puede dividir entre cero\n");
        return 1;
    }

    int residuo = a;
    while (residuo >= b) {
        residuo -= b;
        cociente++;
    }

    printf("Cociente: %d\n", cociente);
    printf("Residuo: %d\n", residuo);

    return 0;
}
