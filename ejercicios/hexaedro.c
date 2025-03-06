// Genesis Fabiola Soto Garcia

#include <stdio.h>

int main(void) {
    float lado;
    float area_base, area_lateral, area_total, volumen;

    printf("Cuanto mide uno de los lados?: ");
    scanf("%f", &lado);

    area_base = lado * lado;
    area_lateral = 4 * (lado * lado);
    area_total = 6 * (lado * lado);
    volumen = (lado * lado * lado);

    printf("El area de la base es de: %.2f \n", area_base);
    printf("El area lateral es: %.2f \n", area_lateral);
    printf("El area total es de: %.2f \n", area_total);
    printf("El valor del volumen es: %.2f \n", volumen);

    return 0;
}
