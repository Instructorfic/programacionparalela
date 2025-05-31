#include <stdio.h>

long long factorial(int num) {
    long long resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

long long combinaciones(int n, int r) {
    if (r > n || n < 0 || r < 0) {
        return 0; // No es posible calcular combinaciones
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("Ingrese el valor de r: ");
    scanf("%d", &r);
    
    long long resultado = combinaciones(n, r);
    printf("El número de combinaciones C(%d, %d) es: %lld\n", n, r, resultado);
    
    return 0;
}
