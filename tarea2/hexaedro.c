#include <stdio.h>

int main() {
    printf("Escribe el tamaño de la árista de un hexaedro regular\n");
    float l;
    scanf("%f", &l);
    printf("El área lateral es: %f\n", 4*l);
    printf("El área total es: %f\n", 6*l);
    printf("El volumen es: %f\n", l*l*l);
}