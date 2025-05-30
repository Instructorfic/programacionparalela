/* Prpgramacion Paralela, Ejercicio 04
Desarrolle un programa que dados a y b enteros, informar el producto de ambos
por sumas sucesivas.
11/Marzo/2025 */
#include <stdio.h>

int main() {
    int a, b, producto = 0;
    
    printf("Valor de a: ");
    scanf("%d", &a);
    
    printf("Valor de b: ");
    scanf("%d", &b);
    
    for (int i = 0; i < b; i++) {
        producto += a;
    }
    
    printf("El resultado de %d y %d por sumas sucesivas: %d\n", a, b, producto);
    
    return 0;
}
