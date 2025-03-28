//ejercicio 6, Calcular el número de combinaciones de n elementos tomando r a la vez
//emily sofia delgado lopez
#include <stdio.h>

//part1 ciclo con el tipo de dato de long
long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

long long combinaciones(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}



//part2 hacer el main
int main() {
    int n, r;

    // Ingresar los valores de n y r
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    printf("Ingrese el valor de r: ");
    scanf("%d", &r);

    // Calcular y mostrar el número de combinaciones
    printf("El número de combinaciones de %d elementos tomados de %d en %d es: %lld\n", n, r, r, combinaciones(n, r));

    return 0;
}
