/* Programacion Paralela, Ejercicio 07
Dado un capital inicial, a un determinado porcentaje de intereses anual
determine en cuantos meses este capital se duplicara, suponiendo que el
capital y los interese generados son reinvertido.
12/Marzo/2025 */

#include <stdio.h>
#include <math.h>

int main() {
    double capital_inicial, tasa_interes, meses;

    printf("Introduce el capital inicial: ");
    scanf("%lf", &capital_inicial);

    printf("Introduce la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasa_interes);

    meses = (12 * log(2)) / log(1 + tasa_interes / 100);

    printf("El capital se duplicará en aproximadamente %.2lf meses.\n", meses);

    return 0;
}

