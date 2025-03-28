//emilyyyyyy- ejercicio4 - Desarrolle un programa que dados a y b enteros, informar el producto de ambos por sumas sucesivas.

#include <stdio.h>

int main() {
    int num1, num2, resultado = 0;

//parte1- Pedir los números 

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

//parte2- operacion para las sumas 
    for (int i = 0; i < num2; i++) {
        resultado += num1;
    }

//parte3 salida
    printf("El producto de %d y %d es: %d\n", num1, num2, resultado);
    return 0;
}