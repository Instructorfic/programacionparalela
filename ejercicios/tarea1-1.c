/* emily sofia delgado lopez- programacion paralela
Implementa un programa que al recibir como dato la dimension del lado de
un hexaedro, calcule el area de la base el area lateral, el area total
y el volumen.
03/03/2025 */

#include <stdio.h>
#include <math.h>

int main() {

    double lado;

    printf("lado del hexaedro:\n");
    scanf("%lf", &lado);

    double areaBase = lado * lado;
    double areaLateral = 4 * areaBase;
    double areaTotal = 6 * areaBase;
    double volumen = lado * lado * lado;

   printf("Área de la base: %.2lf unidades cuadradas\n", areaBase);
   printf("Área lateral: %.2lf unidades cuadradas\n", areaLateral);
   printf("Área total: %.2lf unidades cuadradas\n", areaTotal);
   printf("Volumen: %.2lf unidades cúbicas\n", volumen);

return 0;

}
