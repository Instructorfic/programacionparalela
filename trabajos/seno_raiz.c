#include <stdio.h>
#include <math.h>  // Biblioteca para funciones matemáticas

int main() {
    double numero, raiz_cuadrada, seno;

    // Solicitar al usuario un número
    printf("Introduce un número: ");
    scanf("%lf", &numero);

    // Calcular la raíz cuadrada y el seno
    raiz_cuadrada = sqrt(numero); // Función sqrt() para la raíz cuadrada
    seno = sin(numero);           // Función sin() para calcular el seno

    // Mostrar los resultados
    printf("La raíz cuadrada de %.2lf es %.2lf\n", numero, raiz_cuadrada);
    printf("El seno de %.2lf es %.2lf\n", numero, seno);

    return 0;
}
