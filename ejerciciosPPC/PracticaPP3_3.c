//Justin Emmanuel Parra Cardenas
//Programación Paralela
//Práctica 03 03/03/2025
//Triángulo
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double area;

    printf("Ingrese las coordenadas del primer vertice (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Ingrese las coordenadas del segundo vertice (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Ingrese las coordenadas del tercer vertice (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

 
    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    printf("El area del triangulo es: %.2f\n", area);
    
    return 0;
}
