/*Dados dos valores enteros (a, b) determinar el valor
de la división entera y el resto de la división entera
de los mismos (a, b), sin usar los operadores de
división entera ó el de residuo.*/
#include <stdio.h>

int main() {
    int a, b, cociente = 0, residuo;

    printf("Ingrese dos números enteros (a b): ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Error: No se puede dividir por cero.\n");
        return 1;
    }

    residuo = a;
    while (residuo >= b) {
        residuo -= b;
        cociente++;
    }

    printf("División entera: %d\n", cociente);
    printf("Residuo: %d\n", residuo);

    return 0;
}
