/*
Introduccion:
Implemente un programa que al recibir como dato
la dimensión del lado de un hexaedro, calcule el
área de la base el área lateral, el área total y el
volumen.
Fecha:04/03/2025
*/
#include <stdio.h>
int main()
{
    //Declaracion de variables
    int lado, area_cara, area_total, volumen;
    //Entrada de datos
    printf("Proporcione la medida del lado: ");
    scanf("%d", &lado);
    //Prosesos
    area_cara=lado*lado;
    area_total=area_cara*6;
    volumen=area_cara*lado;
    //Salida de datos
    printf("El área de la base el área lateral es: %d \n", area_cara);
    printf("El área total es: %d\n", area_total); 
    printf("El volumen es: %d\n", volumen);
    return 0;
}
