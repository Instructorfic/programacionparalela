#include <stdio.h>

int main() {
    int a, b, c, medio;

    printf("ingresa tres numeros diferentes:");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b)) {
        medio = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        medio = b;
    } else {
        medio = c;
    }

    printf("el numero medio es: %d\n", medio);

    return 0;
}

