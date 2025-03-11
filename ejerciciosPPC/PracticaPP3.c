//Justin Emmanuel Parra Cardenas
//Programación Paralela
//Práctica 03 03/03/2025
//Hexaedro

#include <stdio.h>

/* Nota:
   A = a^2, AT = 6a^2, V = a^3
*/

void main() {
    int L, A, AT, V;

    // Solicitar la dimensión de la arista del hexaedro
    printf("Ingrese la dimensión de la arista del hexaedro:\n");
    scanf("%d", &L);

    // Calcular el área de la base, el área total y el volumen
    A = L * L;
    AT = 6 * A;
    V = L * L * L;

    // Imprimir los resultados
    printf("El área de la base es: %d\n", A);
    printf("El área total es: %d\n", AT);
    printf("El volumen total es: %d\n", V);
}

