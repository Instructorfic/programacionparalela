/*Dado un capital inicial, a un determinado porcentaje
de intereses anual determine en cuantos meses
este capital se duplicara, suponiendo que el capital
y los interese generados son reinvertido.*/
#include <stdio.h>
#include <math.h>

int main() {
    double capitalInicial, interesAnual;

    printf("Ingrese el capital inicial: ");
    scanf("%lf", &capitalInicial);
    printf("Ingrese el interés anual (en porcentaje): ");
    scanf("%lf", &interesAnual);

    double interesMensual = interesAnual / 1200.0;
    double meses = log(2) / log(1 + interesMensual);

    printf("El capital se duplicará en aproximadamente %.2f meses.\n", meses);

    return 0;
}

