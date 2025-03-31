#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidadNumeros;
    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &cantidadNumeros);

    // Asignación dinámica de memoria para 'n' enteros
    int *arregloNumeros = (int *)malloc(cantidadNumeros * sizeof(int));
    if (arregloNumeros == NULL) {  // Verificación de errores
        printf("Error al asignar memoria\n");
        return 1;
    }

    // Lectura de los números
    printf("Introduce %d números:\n", cantidadNumeros);
    for (int i = 0; i < cantidadNumeros; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arregloNumeros[i]);
    }

    // Cálculo del promedio
    int suma = 0;
    for (int i = 0; i < cantidadNumeros; i++) {
        suma += arregloNumeros[i];
    }
    float promedio = (float)suma / cantidadNumeros;

    printf("El promedio es: %.2f\n", promedio);

    // Liberar memoria asignada
    free(arregloNumeros);
    arregloNumeros = NULL;  // Apuntador nulo después de liberar memoria

    return 0;
}
