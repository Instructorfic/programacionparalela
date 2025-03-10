/*Implemente un programa que al recibir como dato
la dimensión del lado de un hexaedro, calcule el
área de la base el área lateral, el área total y el
volumen.*/

#include <stdio.h>

int main(){
    float lado;

    printf("Ingrese la dimensión del lado del hexaedro: ");
    scanf("%f", &lado);

    printf("\nResultados:\n");
    printf("Área de la base: %.2f\n", lado * lado);
    printf("Área lateral: %.2f\n", 4 * lado * lado);
    printf("Área total: %.2f\n", 6 * lado * lado);
    printf("Volumen: %.2f\n", lado * lado * lado);

return 0;
}
