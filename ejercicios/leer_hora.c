#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("ingresa la hora en formato 24 horas (hh mm ss):");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    segundos++;

    //ajustando limite
    if (segundos == 60) {
        segundos = 0;
        minutos++;
    }
    if (minutos == 60) {
        minutos = 0;
        horas++;
    }
    if (horas == 24) {
        horas = 0;
    }

    // Imprimir la hora un segundo después
    printf("la hora un segundo después es: %02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}

