/*emily sofia delgado lopezProgramacion Paralela, Parte 02.
Escribe un programa que dada las dimensiones de un cilindro hueco
(radio interior, radio exterior y altura) determine la superficie y el
volumen.
04/03/2025 */


#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    float radio_interior, radio_exterior, altura;
    float superficie_lateral_exterior, superficie_lateral_interior, superficie_lateral_total;
    float area_superior_inferior_exterior, area_superior_inferior_interior, area_total;
    float volumen;

    printf("Introduce el radio interior del cilindro (r): ");
    scanf("%f", &radio_interior);

    printf("radio exterior del cilindro (R): ");
    scanf("%f", &radio_exterior);

    printf("cilindro (h): ");
    scanf("%f", &altura);

    //para la superficie, operaciones
    superficie_lateral_exterior = 2 * PI * radio_exterior * altura;
    superficie_lateral_interior = 2 * PI * radio_interior * altura;
    superficie_lateral_total = superficie_lateral_exterior - superficie_lateral_interior;

    area_superior_inferior_exterior = 2 * PI * radio_exterior * radio_exterior;
    area_superior_inferior_interior = 2 * PI * radio_interior * radio_interior;
    area_total = superficie_lateral_total + area_superior_inferior_exterior - area_superior_inferior_interior;
    volumen = PI * altura * (radio_exterior * radio_exterior - radio_interior * radio_interior);

    printf("Superficie lateral total: %.2f\n", superficie_lateral_total);
    printf("Area total de la superficie: %.2f\n", area_total);
    printf("Volumen del cilindro hueco: %.2f\n", volumen);

    return 0;
}
