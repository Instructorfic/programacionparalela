#include<stdio.h>

int main(){
    float lado, area_base, area_lateral, area_total, volumen;

    // Entrada de datos
    printf("Introduce la dimensión del lado del hexaedro: ");
    scanf("%f", &lado);

    // Cálculos
    area_base = lado * lado;
    area_lateral = 4 * area_base;
    area_total = 6 * area_base;
    volumen = lado * lado * lado;

    // Impresión de resultados
    printf("Área de la base: %.2f\n", area_base);
    printf("Área lateral: %.2f\n", area_lateral);
    printf("Área total: %.2f\n", area_total);
    printf("Volumen: %.2f\n", volumen);

    return 0;
}
