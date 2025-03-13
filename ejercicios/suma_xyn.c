// Genesis Fabiola Soto Garcia
#include <stdio.h>
#include <math.h>

int main() {
    int x, n, i;
    double suma = 1;

    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    for (i=1; i<=n; i++){
        suma += pow(x,i);
    }

    printf("El resultado es: %.2lf", suma);

    return 0;
}