#include <stdio.h>

int main() {
    int a, b, c;

    // Leer tres números diferentes
    printf("Introduce el primer número: ");
    scanf("%d", &a);
    printf("Introduce el segundo número: ");
    scanf("%d", &b);
    printf("Introduce el tercer número: ");
    scanf("%d", &c);

    // Comprobamos si los números son diferentes
    if (a == b || b == c || a == c) {
        printf("Los números deben ser diferentes.\n");
    } else {
        // Determinar el número medio
        int medio;

        if ((a > b && a < c) || (a < b && a > c)) {
            medio = a;
        } else if ((b > a && b < c) || (b < a && b > c)) {
            medio = b;
        } else {
            medio = c;
        }

        // Imprimir el número medio
        printf("El número medio es: %d\n", medio);
    }

    return 0;
}
