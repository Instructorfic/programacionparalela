#include <stdio.h>

int main() {
    float a[2], b[2], c[2];
    printf("Introduzca las coordenadas del vértice a:\n");
    scanf("%f %f", &a[0], &a[1]);
    printf("Introduzca las coordenadas del vértice b:\n");
    scanf("%f %f", &b[0], &b[1]);
    printf("Introduzca las coordenadas del vértice c:\n");
    scanf("%f %f", &c[0], &c[1]);

    float area = (a[0]*(b[1] - c[1]) + b[0]*(c[1] - a[1]) + c[0]*(a[1] - b[1]))/2;

    printf("El área del triángulo es: %f\n", area < 0 ? -area : area);

    return 0;
}
