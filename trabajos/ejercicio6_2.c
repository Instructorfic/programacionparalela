/*Calcular el número de combinaciones de n

elementos tomando r a la vez*/
#include <stdio.h>

int main() {
    int n, r;
    long long fact_n = 1, fact_r = 1, fact_nr = 1, combinaciones;

    printf("Ingrese los valores de n y r: ");
    scanf("%d %d", &n, &r);

    // Verificar que r <= n
    if (r > n || n < 0 || r < 0) {
        printf("Valores no válidos.\n");
        return 1;
    }

    // Calcular factorial de n
    for (int i = 2; i <= n; i++) {
        fact_n *= i;
    }

    // Calcular factorial de r
    for (int i = 2; i <= r; i++) {
        fact_r *= i;
    }

    // Calcular factorial de (n - r)
    for (int i = 2; i <= (n - r); i++) {
        fact_nr *= i;
    }

    combinaciones = fact_n / (fact_r * fact_nr);

    printf("C(%d, %d) = %lld\n", n, r, combinaciones);

    return 0;
}
