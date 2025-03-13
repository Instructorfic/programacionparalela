/*Desarrolle un programa que dados a y b enteros,
informar el producto de ambos por sumas
sucesivas.*/
#include <stdio.h>

int main() {
    int a, b, producto = 0;
    
    printf("Ingrese dos números enteros (a b): ");
    scanf("%d %d", &a, &b);

    // Convertir a valores absolutos
    int valor_a = a;
    if (a < 0) {
        valor_a = -a;
    }

    int valor_b = b;
    if (b < 0) {
        valor_b = -b;
    }

    for (int i = 0; i < valor_b; i++) {
        producto += valor_a;
    }

    // Ajustar signo si uno de los números es negativo
    if ((a < 0 && b >= 0) || (a >= 0 && b < 0)) {
        producto = -producto;
    }

    printf("El producto es: %d\n", producto);

    return 0;
}
