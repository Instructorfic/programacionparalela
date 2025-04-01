//emily delgado- ejercicio 5 leer x y n y hacer la suma de la operacion
#include <

int main() {
    int x, n;
    float suma = 1.0;

    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += pow(x, i);
    }

    printf("La suma de la serie es: %f\n", suma);

    return 0;
}

























