#include <stdio.h>
#include <assert.h>

typedef struct ResultadoDivision {
    int cociente;
    int residuo;
    int division_por_cero; // 0 si falso de otro modo division por cero se realizó  
} ResultadoDivision;

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
    return division_sin_signo(numerador, divisor, NULL);
}

ResultadoDivision *division_sin_signo(int numerador, int divisor, ResultadoDivision *resultado) {
    if (resultado == NULL) {
        ResultadoDivision *resultado = malloc(sizeof(ResultadoDivision));
    }
}

int main() {
    int d9_4 = division_entera(9, 4);
    printf("Division entera 9/4 (mi función): %d\nDivisión entera C: %d\n", d9_4, 9/4);
    printf("Residuo 9%%4: %d\n", residuo(9, 4));
    printf("Division entera (-9)/4: %d\n", division_entera(-9, 4));
    printf("Residuo (-9)%%4: %d\n", residuo(-9, 4));
    
}