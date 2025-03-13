/*Escriba un programa que lea una hora (hora,
minutos, segundos) y diga la hora que será un
segundo después.*/
#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Ingrese la hora (hh mm ss): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);
    
    //Aumentar un sengundo
    segundos++;

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

    printf("La hora un segundo después es: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
