// Genesis Fabiola Soto Garcia
/*Dados dos valores enteros (a, b) determinar el valor
de la división entera y el resto de la división entera
de los mismos (a, b), sin usar los operadores de
división entera ó el de residuo. */
#include <stdio.h>

int main(void) {
    int a, b;
    int cociente = 0;
    int residuo;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de a: ");
    scanf("%d", &b);

    if (b != 0) {
        while (a >= b) {
            a = a - b;
            cociente++;
        }
    residuo = a;
    printf("Cociente: %d\n", cociente);
    printf("Residuo: %d\n", residuo);
    }
    else {
        printf("Error: Division por cero.\n");
    }

    return 0;
}