/*
OBJETIVO: Dado un capital inicial, a un determinado porcentaje
de intereses anual determine en cuantos meses
este capital se duplicara, suponiendo que el capital
y los interese generados son reinvertido.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 12-03-2025
*/

#include <stdio.h>

int main() {
    double capital, interes_anual, capital_duplicado;
    int meses;

    printf("Introduce el capital inicial: ");
    scanf("%lf", &capital);
    printf("Introduce el porcentaje de interés anual (en porcentaje): ");
    scanf("%lf", &interes_anual);

    //Cálculos
    interes_anual /= 100;
    capital_duplicado = capital*2;

    meses=0;
    while(capital<capital_duplicado){
        capital += capital*(interes_anual/12);
        meses++;
    }

    printf("El capital se duplicará en %d meses.\n", meses);

    return 0;
}
