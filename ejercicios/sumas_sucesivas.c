#include <stdio.h>

int main() {
    int a, b, producto = 0;

    printf("ingresa dos números enteros (a y b):");
    scanf("%d %d", &a, &b);
   
    for (int i = 0; i < b; i++) {
        producto += a;
    }
        printf("el producto de %d y %d es: %d\n", a, b, producto);

    return 0;
}
