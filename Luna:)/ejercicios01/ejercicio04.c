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
