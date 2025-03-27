#include <stdio.h>
#include <math.h>

int main() {
    float tasa_interes, meses;

    printf("ingrese la tasa de interes anual (en porcentaje):");
    scanf("%f", &tasa_interes);

    tasa_interes /= 100;

    meses = (log(2) / log(1 + tasa_interes)) * 12;

    printf("el capital se duplicara en aproximadamente %.2f meses\n", meses);

    return 0;
}
