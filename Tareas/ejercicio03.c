/*Escriba un programa que lea una hora (hora,
minutos, segundos) y diga la hora que será un
segundo después.*/
#include <stdio.h>

int main() {
    int hora, minutos, segundos;

    printf("Ingrese la hora (hh mm ss): ");
    scanf("%d %d %d", &hora, &minutos, &segundos);

    segundos++;
    if (segundos == 60) {
        segundos = 0;
        minutos++;
        if (minutos == 60) {
            minutos = 0;
            hora++;
            if (hora == 24) {
                hora = 0;
            }
        }
    }

    printf("Un segundo después: %02d:%02d:%02d\n", hora, minutos, segundos);

    return 0;
}
