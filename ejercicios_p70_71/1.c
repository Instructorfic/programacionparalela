#include <stdio.h>
#include <stdlib.h>

typedef struct ResultadoDivision {
    int cociente;
    int residuo;
    int division_por_cero; // 0 si falso de otro modo division por cero se realizó  
} ResultadoDivision;

ResultadoDivision *division_sin_signo(int numerador, int divisor);

ResultadoDivision *division_entera(int numerador, int divisor, ResultadoDivision *resultado) {
    if (resultado == NULL) {
        ResultadoDivision *resultado = malloc(sizeof(ResultadoDivision));
    }
    if (divisor == 0) {
        printf("División por 0 no definida\n");
        resultado->division_por_cero = 1;
        return resultado;
    }
    if (numerador == 0) {
        resultado->cociente = 0;
        resultado->residuo = 0;
        resultado->division_por_cero = 0;
        return resultado;
    }
    if (divisor < 0) {
        resultado = division_entera(numerador, -divisor, resultado);
        resultado->cociente = -resultado->cociente;
        // resultado->division_por_cero = 0;
        return resultado;
    }
    if (numerador < 0) {
        resultado = division_entera(-numerador, divisor, resultado);
        if (resultado->residuo == 0) {
            resultado->cociente = -resultado->cociente;
            resultado->residuo = 0;
            return resultado;
        } else {
            resultado->cociente = -(resultado->cociente+1);
            resultado->residuo = divisor - resultado->residuo;
            return resultado;
        }
    }
    free(resultado);
    return division_sin_signo(numerador, divisor);
}

ResultadoDivision *division_sin_signo(int numerador, int divisor) {
    ResultadoDivision *resultado = malloc(sizeof(ResultadoDivision));
    if (divisor == 0) {
        resultado->division_por_cero = 1;
        return resultado;
    }
    int *Q = &resultado->cociente;
    int *R = &resultado->residuo;
    *Q = 0;
    *R = numerador;
    if (numerador == 0) {
        *Q = 0;
        *R = 0;
        resultado->division_por_cero = 0;
        return resultado;
    }
    while (*R >= divisor) {
        *Q += 1;
        *R -= divisor;
    }
    resultado->division_por_cero = 0;
    return resultado;
}

int main() {
    int numerador, divisor;
    printf("Ingrese el numerador seguido del divisor:\n");
    scanf("%d %d", &numerador, &divisor);
    ResultadoDivision *division = division_entera(numerador, divisor, NULL);
    if (division->division_por_cero) {
        printf("División por 0 no definida\n");
        return 1;
    }
    printf("Division entera numerador/divisor (mi función): %d\nDivisión entera C: %d\n", division->cociente, numerador/divisor);
    printf("Residuo numerador%%divisor: %d\nResiduo en C: %d\n", division->residuo, numerador%divisor);
    
    int recuperacion_numerador = division->cociente * divisor + division->residuo;
    printf("\ncociente*divisor + residuo de mi función: %d\n", recuperacion_numerador);
    printf("cociente*divisor + residuo en C: %d\n", (numerador/divisor)*divisor + numerador%divisor);
    if (recuperacion_numerador == (numerador/divisor)*divisor + numerador%divisor) {
        printf("Aunque los cocientes y residuos de mis funciones contra las de C son distintas, ambas cumplen la definición de cociente y residuo\n");
    }
}
