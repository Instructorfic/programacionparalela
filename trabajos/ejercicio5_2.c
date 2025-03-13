/*Realizar un programa que lea 2 números x y n y
calcule la suma:

1 + x1 + x2 + x 3 + xn*/
#include <stdio.h>

int main() {
    int x, n, suma = 1, potencia = 1;

    printf("Ingrese los valores de x y n: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        potencia *= x;  // Calcular x^i
        suma += potencia;
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
