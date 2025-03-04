#include <stdio.h>
#define M_PI 3.141592653

int main() {
    printf("Escriba el tamaño del radio interior, exterior y altura de un cilindro hueco:\n");
    float ri, re, h;
    scanf("%f %f %f", &ri, &re, &h);
    float area_discos_huecos = 2*M_PI*(re*re - ri*ri);
    float area_paredes = 2*M_PI*(ri + re);
    printf("La superficie es: %f\n", area_discos_huecos + area_paredes);
    float cilindro_interior_volumen = M_PI*ri*ri*h;
    float cilindro_exterior_volumen = M_PI*re*re*h;
    printf("El volumen es: %f\n", cilindro_exterior_volumen - cilindro_interior_volumen);
}
