#include <stdio.h>

void rotate(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
  
    int x, y, z;
    printf("Ingrese tres valores enteros: ");
    scanf("%d %d %d", &x, &y, &z);
    
    printf("Antes de rotar: x = %d, y = %d, z = %d\n", x, y, z);
    rotate(&x, &y, &z);
    printf("Después de rotar: x = %d, y = %d, z = %d\n", x, y, z);
    
    return 0;
}
