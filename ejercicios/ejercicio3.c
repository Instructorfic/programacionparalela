#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float area;

    printf("Ingresa las coordenadas del primer vértice (x1 y1): \n");
    scanf("%f %f", &x1, &y1);
    printf("Ingresa las coordenadas del segundo vértice (x2 y2): \n");
    scanf("%f %f", &x2, &y2);
    printf("Ingresa las coordenadas del tercer vértice (x3 y3): \n");
    scanf("%f %f", &x3, &y3);

    area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0;

    printf("El área del triángulo es: %f \n", area);

    return 0;
}
