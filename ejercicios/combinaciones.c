/*
OBJETIVO: Calcular el número de combinaciones de n
elementos tomando r a la vez
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 12-03-2025
*/

#include <stdio.h>

int main(){
    short int n, r, numerador, den1, den2, combinaciones, i;

    printf("Introduce el valor de (n r): ");
    scanf("%hd", &n);
    scanf("%hd", &r);

    //Cálculos
    numerador=1;
    for(i=1;i<=n;i++){
        numerador *= i;
    }
    den1=1;
    for(i= 1;i<=r;i++){
        den1 *= i;
    }
    den2=1;
    for(i=1;i<=(n-r);i++){
        den2 *= i;
    }

    //Cálculo de combinaciones
    combinaciones = numerador/(den1 * den2);

    printf("El número de combinaciones C(%hd, %hd) es: %hd\n", n, r, combinaciones);

    return 0;
}
