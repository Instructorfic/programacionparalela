#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3, area;

    // Solicitar al usuario las coordenadas de los tres vértices
    printf("Ingrese las coordenadas del primer vértice (x1,y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Ingrese las coordenadas del segundo vértice (x2,y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Ingrese las coordenadas del tercer vértice (x3,y3): ");
    scanf("%f %f", &x3, &y3);

    area = 0.5 * (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    // Tomamos el valor absoluto manualmente si el área es negativa
    if (area < 0) {
        area = -area;
    }

    printf("\nEl área del triángulo es: %.2f\n", area);

    return 0;
}
