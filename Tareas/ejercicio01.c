/*Dados dos valores enteros (a, b) determinar el valor
de la división entera y el resto de la división entera
de los mismos (a, b), sin usar los operadores de
división entera ó el de residuo.*/
#include <stdio.h>

int main() {
    int a, b, division = 0, resto;

    printf("Ingrese el dividendo (a): ");
    scanf("%d", &a);
    printf("Ingrese el divisor (b): ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: No se puede dividir por cero.\n");
        return 1;
    }

    resto = a;
    while (resto >= b) {
        resto -= b;
        division++;
    }

    printf("Division: %d\nResto: %d\n", division, resto);

    return 0;
}

