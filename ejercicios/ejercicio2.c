#include <stdio.h>

int main() {

    float pi=3.1415;
    float radio_interior, radio_exterior, altura;
    float superficie, volumen;
    printf("Ingresa el radio interior del cilindro: \n");
    scanf("%f", &radio_interior);
    printf("Ingresa el radio exterior del cilindro: \n");
    scanf("%f", &radio_exterior);
    printf("Ingresa la altura del cilindro: \n");
    scanf("%f", &altura);

    superficie = 2 * pi * (radio_exterior * radio_exterior - radio_interior * radio_interior) + 2 * pi * altura * (radio_exterior + radio_interior);

    volumen = pi * altura * (radio_exterior * radio_exterior - radio_interior * radio_interior);

    printf("La superficie del cilindro hueco es: %f \n", superficie);
    printf("El volumen del cilindro hueco es: %f \n", volumen);

    return 0;
}
