//Programación Paralela
//Justin Emmanuel Parra Cardenas
//Calculo de duplicación de un capital dado

#include <stdio.h>
#include <math.h>

int main() {
    double capitalInicial, tasaInteresAnual;
    int n = 12; // Composición mensual
    double montoTotal;
    int meses = 0;

    printf("Ingrese el capital inicial: ");
    scanf("%lf", &capitalInicial);

    printf("Ingrese la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasaInteresAnual);
    
    tasaInteresAnual /= 100; // Convertir porcentaje a fracción decimal

    montoTotal = capitalInicial;
    
    while (montoTotal < 2 * capitalInicial) {
        montoTotal *= (1 + tasaInteresAnual / n);
        meses++;
    }

    printf("El capital se duplicará en %d meses.\n", meses);

    return 0;
}
