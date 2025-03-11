#include <stdio.h>
int main() {
    double radio_interior, radio_exterior, altura;
    double area_lateral, area_bases, area_total, volumen;
    double PI = 3.1416;

    printf("Ingrese el radio interior del cilindro: ");
    scanf("%lf", &radio_interior);

    printf("Ingrese el radio exterior del cilindro: ");
    scanf("%lf", &radio_exterior);

    printf("Ingrese la altura del cilindro: ");
    scanf("%lf", &altura);

    area_lateral = 2 * PI * altura * (radio_exterior + radio_interior);
    area_bases = 2 * PI * (radio_exterior * radio_exterior - radio_interior * radio_interior);
    area_total = area_lateral + area_bases;
    volumen = PI * altura * (radio_exterior * radio_exterior - radio_interior * radio_interior);

    printf("\nResultados:\n");
    printf("Área lateral: %.2f\n", area_lateral);
    printf("Área de las bases: %.2f\n", area_bases);
    printf("Área total: %.2f\n", area_total);
    printf("Volumen: %.2f\n", volumen);

    return 0;
}
