#include <stdio.h>

// a <- b <- c <-a
void rotar(int *a, int *b, int *c) {
    int tmp = *a;
    *a = *b;
    *b = *c;
    *c = tmp;
}

int main() {
    int a, b, c;
    printf("Escriba tres enteros:\n");
    scanf("%d %d %d", &a, &b, &c);
    rotar(&a, &b, &c);
    printf("La rotación de estos números es:\n%d %d %d\n", a, b, c);
}