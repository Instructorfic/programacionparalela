// Genesis Fabiola Soto Garcia

#include <stdio.h>

int main() {
    int a, b;
    int i, resultado = 0;

    printf("Ingrese un numero a:");
    scanf("%d", &a);
    printf("Ingrese un numero b:");
    scanf("%d", &b);

    for(i=0; i<b ;i++){
        resultado += a;
    }
    printf("El resultado es: %d", resultado);

    return 0;
}