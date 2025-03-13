// Genesis Fabiola Soto Garcia

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Ingrese la hora: ");
    scanf("%d", &horas);
    printf("Ingrese el minuto: ");
    scanf("%d", &minutos);
    printf("Ingrese los segundos: ");
    scanf("%d", &segundos);

    segundos++;

    if (segundos == 60) {
        segundos = 0;
        minutos++;
        if (minutos == 60) {
            minutos = 0;
            horas++;
            if (horas == 24) {
                horas = 0; 
            }
        }
    }


    printf("La hora un segundo después es: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
