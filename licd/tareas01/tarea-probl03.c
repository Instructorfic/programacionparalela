/* Tarea Programacion Paralela, Parte 03.
Desarrolle un programa que al recibir las coordenadas de los vértices
de un triangulo determine su área.
04/03/2025 */


#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float area;

    // Pedimos al usuario que ingrese las coordenadas de los tres vértices
    printf("Introduce las coordenadas del vértice A (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Introduce las coordenadas del vértice B (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    
    printf("Introduce las coordenadas del vértice C (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // Aplicamos la fórmula para calcular el área del triángulo
    area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    // Mostramos el resultado
    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}
