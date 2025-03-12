#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Ingrese la hora (0-23): ");
    scanf("%d", &horas);

    printf("Ingrese los minutos (0-59): ");
    scanf("%d", &minutos);

    printf("Ingrese los segundos (0-59): ");
    scanf("%d", &segundos);

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
