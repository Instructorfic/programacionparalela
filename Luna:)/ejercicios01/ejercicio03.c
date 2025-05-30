#include <stdio.h>

int main() {
    int hora, minutos, segundos;
    
    printf("Introduzca la hora (horas minutos segundos): ");
    scanf("%d %d %d", &hora, &minutos, &segundos);
    
    segundos++;
    
    if (segundos == 60) {
        segundos = 0;
        minutos++;
    }
    
    if (minutos == 60) {
        minutos = 0;
        hora++;
    }
    
    if (hora == 24) {
        hora = 0;
    }
    
    printf("La hora despues de un segundo: %02d:%02d:%02d\n", hora, minutos, segundos);
    
    return 0;
}
