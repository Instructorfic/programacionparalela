/* Programacion Paralela
Dados dos valores enteros (a, b) determinar el valor de la división entera
y el resto de la división entera de los mismos (a, b), sin usar los operadores
de división entera ó el de residuo.
10/Marzo/2025 */

#include <stdio.h>
#include <stdlib.h> //funcion abs

void division_entera_resto(int a, int b, int* cociente, int* resto) {
    *cociente = 0;
    *resto = a;

    if (b == 0) {
        printf("Error: division por cero no permitida\n");
        return;
    }

    while (*resto >= b) {
        *resto -= b;
        (*cociente)++;
    }

    while (*resto <= -b) {
        *resto += b;
        (*cociente)--;
    }
}

int main() {
    int a, b;
    int cociente, resto;

    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    division_entera_resto(a, b, &cociente, &resto);

    printf("Cociente: %d\n", cociente);
    printf("Resto: %d\n", resto);

    return 0;
}
