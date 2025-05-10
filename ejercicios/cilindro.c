/*Escribe un programa que dada las dimensiones de
un cilindro hueco (radio interior, radio exterior y
altura) determine la superficie y el volumen.*/
#include <stdio.h>
#include <math.h>

int main() {
    float R, r, h;

    printf("Ingrese el radio exterior: ");
    scanf("%f", &R);

    printf("Ingrese el radio interior: ");
    scanf("%f", &r);

    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &h);


    float volumen = M_PI * (R * R - r * r) * h;

    float superficie_total = 2 * M_PI * (R * R - r * r) + 2 * M_PI * (R + r) * h;

    printf("\nVolumen del cilindro hueco: %.2f unidades\n", volumen);
    printf("Superficie total del cilindro : %.2f unidades\n", superficie_total);

    return 0;
}
