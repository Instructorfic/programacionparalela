#include <stdio.h>

void incrementar_segundo(int *hora, int *minuto, int *segundo) {
    (*segundo)++;
    if (*segundo == 60) {
        *segundo = 0;
        (*minuto)++;
        if (*minuto == 60) {
            *minuto = 0;
            (*hora)++;
            if (*hora == 24) {
                *hora = 0;
            }
        }
    }
}

int main() {
    int hora, minuto, segundo;
    
    printf("Ingrese la hora (HH MM SS): ");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    
    if (hora < 0 || hora >= 24 || minuto < 0 || minuto >= 60 || segundo < 0 || segundo >= 60) {
        printf("Error: Hora no válida.\n");
        return 1;
    }
    
    incrementar_segundo(&hora, &minuto, &segundo);
    
    printf("La hora un segundo después es: %02d:%02d:%02d\n", hora, minuto, segundo);
    
    return 0;
}
