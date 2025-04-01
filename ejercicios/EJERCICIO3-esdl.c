//emilyyyyyy- EJERCICIO3 Escriba un programa que lea una hora (hora,minutos, segundos) y diga la hora que será un segundo después.

#include <stdio.h>

int main() {
    int horas, mins, segs;

//parte 1 informacion de usuario ejjeje
    printf("Ingrese la hora:");
    scanf("%d", &horas);
    printf("Ingrese los minutos:");
    scanf("%d", &mins);
    printf("Ingrese los segundos:");
    scanf("%d", &segs);

//part2 hacer ifs para Incrementar un segundo
   
    segs++;
    if (segs == 60) {
        segs = 0;
        mins++;
    if (mins == 60) {
        mins = 0;
        horas++;
    if (horas == 24) {
        horas = 0;
            }
        }
    }
    
//parte3 imprimir salida
    printf("Un segundo después: %02d:%02d:%02d\n", horas, mins, segs);
    return 0;
}

