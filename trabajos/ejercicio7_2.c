/*Dado un capital inicial, a un determinado porcentaje
de intereses anual determine en cuantos meses
este capital se duplicara, suponiendo que el capital
y los interese generados son reinvertido.*/
#include <stdio.h>

int main() {
    double capital, interes, capital_final;
    int meses = 0;

    printf("Ingrese el capital inicial: ");
    scanf("%lf", &capital);

    printf("Ingrese el porcentaje de interés anual: ");
    scanf("%lf", &interes);

    interes = interes / 100 / 12;

    capital_final = capital * 2;
    while (capital < capital_final) {
        capital += capital * interes;
        meses++;
    }

    printf("El capital se duplicará en %d meses.\n", meses);

    return 0;
}
