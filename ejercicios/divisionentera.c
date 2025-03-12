#include <stdio.h>

void division(int a, int b, int *resultado, int *resto) {
    int cociente = 0;
    int residuo = a;

    while (residuo >= b) {
        residuo -= b;
        cociente++;
    }

    *resultado = cociente;
    *resto = residuo;
}

int main() {
    int a = 15;
    int b = 7;
    int resultado, resto;

    division(a, b, &resultado, &resto);

    printf("División entera: %d\n", resultado);
    printf("Resto: %d\n", resto);

    return 0;
}
