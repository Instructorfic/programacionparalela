/*Realizar un programa que lea 2 números x y n y
calcule la suma:
1 + x¹ + x² + x³ + x^n*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, n;
    float suma = 1;

    printf("Ingrese el valor de x: ");
    scanf("%f", &x);
    printf("Ingrese el valor de n: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        suma += pow(x, i);
    }

    printf("La suma de la serie es: %f\n", suma);

    return 0;
}

