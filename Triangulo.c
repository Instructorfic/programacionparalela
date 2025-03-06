#include <stdio.h>
#include <math.h>

double calcularArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
    double x1, y1, x2, y2, x3, y3, area;

    printf("Introduce las coordenadas del primer vértice (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Introduce las coordenadas del segundo vértice (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Introduce las coordenadas del tercer vértice (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    area = calcularArea(x1, y1, x2, y2, x3, y3);

    if (area == 0) {
        printf("Los puntos son colineales, no forman un triángulo.\n");
    } else {
        printf("El área del triángulo es: %.2lf\n", area);
    }

    return 0;
}
