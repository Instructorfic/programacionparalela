#include <stdio.h>
#include <math.h>

int main() {
    double lado;
    double areaBase, areaLateral, areaTotal, volumen;
    
    printf("Introduce la dimensión del lado del hexaedro: ");
    scanf("%lf", &lado);
    
    areaLateral = lado * lado;
    
    areaLateral = 4 * areaBase;
    
    areaTotal = 6 * areaBase;
    
    volumen = pow(lado, 3);
    
    printf("Área de la base: %.2lf\n", areaBase);
    printf("Área lateral: %.2lf\n", areaLateral);
    printf("Área total: %.2lf\n", areaTotal);
    printf("Volumen: %.2lf\n", volumen);
    
    return 0;
}