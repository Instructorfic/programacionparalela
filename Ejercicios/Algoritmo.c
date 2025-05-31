#include <stdio.h>

int encontrar_medio(int a, int b, int c) {
    if ((a > b && a < c) || (a > c && a < b)) {
        return a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;
    
    printf("Ingrese tres números diferentes: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Error: Los números deben ser diferentes.\n");
        return 1;
    }
    
    int medio = encontrar_medio(num1, num2, num3);
    printf("El número medio es: %d\n", medio);
    
    return 0;
}
