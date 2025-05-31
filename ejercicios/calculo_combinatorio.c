#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
    return 1;
    else
    return n * factorial(n - 1);
}

int combinations(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    printf("ingrese el valor de n:");
    scanf("%d", &n);
    printf("ingrese el valor de r:");
    scanf("%d", &r);
   
    if (r > n) {
    printf("r no puede ser mayor que n\n");
    } else {
    printf("el numero de combinaciones de %d elementos tomados de %d a la vez es:%d\n", n, r, combinations(n, r));
    }
    return 0;
}
