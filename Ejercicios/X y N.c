#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}

int calcular_suma(int x, int n) {
    int suma = 1;
    for (int i = 1; i <= n; i++) {
        suma += potencia(x, i);
    }
    return suma;
}

int main() {
    int x, n;
    
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: n debe ser un número entero no negativo.\n");
        return 1;
    }
    
    int resultado = calcular_suma(x, n);
    printf("La suma es: %d\n", resultado);
    
    return 0;
}
