#include <stdio.h>
#include <math.h>

int calcular_meses_para_duplicar(double capital, double tasa_anual) {
    double capital_objetivo = 2 * capital;
    double tasa_mensual = tasa_anual / 12 / 100;
    int meses = 0;
    
    while (capital < capital_objetivo) {
        capital += capital * tasa_mensual;
        meses++;
    }
    
    return meses;
}

int main() {
    double capital, tasa_anual;
    
    printf("Ingrese el capital inicial: ");
    scanf("%lf", &capital);
    printf("Ingrese la tasa de interés anual (en porcentaje): ");
    scanf("%lf", &tasa_anual);
    
    if (capital <= 0 || tasa_anual <= 0) {
        printf("Error: El capital y la tasa deben ser valores positivos.\n");
        return 1;
    }
    
    int meses = calcular_meses_para_duplicar(capital, tasa_anual);
    printf("El capital se duplicará en aproximadamente %d meses.\n", meses);
    
    return 0;
}
