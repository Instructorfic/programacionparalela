// Genesis Fabiola Soto Garcia

#include <stdio.h>
#include <math.h>

int main(void) {

    const float PI = 3.1416;
    float radio_interior, radio_exterior, altura;
    float superficie, volumen;

    printf("Ingrese el valor del radio interior: ");
    scanf("%f", &radio_interior);
    printf("Ingrese el valor del radio exterior: ");
    scanf("%f", &radio_exterior);
    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    superficie = ((2 * PI * altura) * (radio_exterior + radio_interior)) + (2 * PI* (pow(radio_exterior, 2) - pow(radio_interior, 2)));
    volumen = PI * altura * (pow(radio_exterior, 2) - pow(radio_interior, 2));

    printf("El valor de la superficie es: %.2f \n", superficie);
    printf("el valor del volumen es: %.2f \n", volumen);

    return 0;
}