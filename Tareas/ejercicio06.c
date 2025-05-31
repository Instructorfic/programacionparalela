/*Calcular el número de combinaciones de n
elementos tomando r a la vez*/

#include <stdio.h>

int main() {
    int n, r;
    unsigned long numerador, denominador, resultado;

    printf("Ingrese el número total de elementos (n): ");
    scanf("%d", &n);
    printf("Ingrese el número de elementos a tomar (r): ");
    scanf("%d", &r);

    if (r < 0 || r > n) {
        printf("No es posible calcular la combinación.\n");
        return 1;
    }

    if (r == 0 || r == n) {
        printf("El número de combinaciones es: 1\n");
        return 0;
    }

    if (r > n / 2) 
        r = n - r;

    numerador = 1;
    for (int i = 1; i <= n; i++) 
        numerador *= i;

    denominador = 1;
    for (int i = 1; i <= r; i++) 
        denominador *= i;
    for (int i = 1; i <= (n - r); i++) 
        denominador *= i;

    resultado = numerador / denominador;

    printf("Combinaciones : %lu\n", resultado);

    return 0;
}
