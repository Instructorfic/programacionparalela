/*
Introduccion:
Desarrolle un programa que al recibir las
coordenadas de los vértices de un triangulo
determine su área.
Fecha:05/03/25
*/
#include <math.h>
#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, x3, y3, area;

    // Solicitar las coordenadas al usuario
    printf("Introduce las coordenadas del primer vertice \n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    printf("Introduce las coordenadas del segundo vertice \n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    printf("Introduce las coordenadas del tercer vertice \n");
    printf("x3: ");
    scanf("%f", &x3);
    printf("y3: ");
    scanf("%f", &y3);
    // Calcular el area
    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    // Mostrar el resultado
    printf("El área del triángulo es: %.2lf unidades cuadradas\n", area);
    return 0;
}
