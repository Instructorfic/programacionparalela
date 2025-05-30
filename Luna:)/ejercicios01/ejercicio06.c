#include <stdio.h>

int main() {
    int n, r;
    long long combinacion;

    printf("Valor de n (total de elementos): ");
    scanf("%d", &n);

    printf("Valor de r (elementos a tomar): ");
    scanf("%d", &r);

    long long fact_n = 1, fact_r = 1, fact_n_r = 1;

    for (int i = 1; i <= n; i++) {
        fact_n *= i;
    }

    for (int i = 1; i <= r; i++) {
        fact_r *= i;
    }

    for (int i = 1; i <= (n - r); i++) {
        fact_n_r *= i;
    }

    combinacion = fact_n / (fact_r * fact_n_r);

    printf("Numero de combinaciones de %d elementos tomados de %d a la vez es: %lld\n", n, r, combinacion);

    return 0;
}

