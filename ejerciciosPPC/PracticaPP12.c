//Programa que lee 3 números y los recorre
#include <stdio.h>

void rotate(int *a, int *b, int *c) {
    int temp = *a; 
    *a = *b;       
    *b = *c;       
    *c = temp;     
}

int main() {
    int a = 1, b = 2, c = 3;
    printf("Antes de rotar: a = %d, b = %d, c = %d\n", a, b, c);
    rotate(&a, &b, &c);
    printf("Después de rotar: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
