#include<stdio.h>
#include <stdlib.h>

int main(){
    float x1, y1, x2, y2, x3, y3, area;

    printf("Introduce las coordenadas del primer vértice (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Introduce las coordenadas del segundo vértice (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Introduce las coordenadas del tercer vértice (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    area = abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2);

    printf("El área del triángulo es: %.2f\n", area);

    return 0;
}
