//emily delgado

/*Dado un capital inicial, a un determinado porcentaje
de intereses anual determine en cuantos meses
este capital se duplicara, suponiendo que el capital
y los interese generados son reinvertido.*/
#include <stdio.h>
#include <math.h>

int main() {
//part1: defincion de variables e informacion de usuario
    double capital, interesA;

    printf("capital inicial: ");
    scanf("%lf", &capital);
    printf("interés anual: ");
    scanf("%lf", &interesA);

    double interesM = interesA / 1200.0;
    double meses = log(2) / log(1 + interesM);

    printf("El capital se duplicará en aproximadamente %.2f meses.\n", meses);

    return 0;
}
