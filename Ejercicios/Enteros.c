#include <stdio.h>

void division_entera(int a, int b, int *cociente, int *residuo) {
    if (b == 0) {
        printf("Error: División por cero no permitida.\n");
        return;
    }
    
    int signo = ((a < 0) ^ (b < 0)) ? -1 : 1;
    int abs_a = (a < 0) ? -a : a;
    int abs_b = (b < 0) ? -b : b;
    
    *cociente = 0;
    *residuo = abs_a;
    
    while (*residuo >= abs_b) {
        *residuo -= abs_b;
        (*cociente)++;
    }
    
    *cociente *= signo;
    if (a < 0) {
        *residuo = -*residuo;
    }
}

int main() {
    int a, b, cociente, residuo;
    
    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);
    
    division_entera(a, b, &cociente, &residuo);
    
    printf("Cociente: %d\n", cociente);
    printf("Residuo: %d\n", residuo);
    
    return 0;
}
