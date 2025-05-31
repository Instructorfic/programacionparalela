#include <stdio.h>

int producto_sumas_sucesivas(int a, int b) {
    int producto = 0;
    int negativo = (a < 0) ^ (b < 0); // Determinar si el resultado será negativo
    
    int abs_a = (a < 0) ? -a : a;
    int abs_b = (b < 0) ? -b : b;
    
    for (int i = 0; i < abs_b; i++) {
        producto += abs_a;
    }
    
    return negativo ? -producto : producto;
}

int main() {
    int a, b;
    
    printf("Ingrese dos números enteros: ");
    scanf("%d %d", &a, &b);
    
    int resultado = producto_sumas_sucesivas(a, b);
    printf("El producto es: %d\n", resultado);
    
    return 0;
}
