/*
Introduccion:
Escribe un programa que dada las dimensiones de
un cilindro hueco (radio interior, radio exterior y
altura) determine la superficie y el volumen.
Fecha:05/03/25
*/

#include <stdio.h>
int main()
{
    float r, R, h, area, volumen;
    const float pi=3.1416;
    // Solicitar datos al usuario
    printf("Introduce el radio interior del cilindro: ");
    scanf("%f", &r);
    printf("Introduce el radio exterior del cilindro: ");
    scanf("%f", &R);
    printf("Introduce la altura del cilindro: ");
    scanf("%f", &h);

    if(r>=R){
        printf("Error, el radio exterior tiene que ser mayor");
        return 1;
    }
    // Calculos
    //area = (2 * R * pi * h + 2 * (pi*R*R)) - (2 * r * pi * h + 2 * (pi*r*r));
    //printf("%f\n",area);
    area = 2 * pi * h * (R + r) + 2 * pi * (R * R - r * r);
    volumen=((pi*R*R)*h)-((pi*r*r)*h);
    //printf("%f\n",volumen);
    //volumen = pi * h * (R * R - r * r);

    // Mostrar resultados
    printf("Area superficial: %f unidades cuadradas\n", area);
    printf("Volumen: %f unidades cubicas\n", volumen);
    return 0;
}
