#include <stdio.h>

int main() {
    int x, n;
    int suma = 1;
    
    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    
    printf("Introduce el valor de n: ");
    scanf("%d", &n);
    
    int potencia = x;
    
    for (int i = 1; i <= n; i++) {
        suma += potencia;
        potencia *= x;
    }
    
    printf("La suma es: %d\n", suma);
    
    return 0;
}
