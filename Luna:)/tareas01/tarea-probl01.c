#include <stdio.h>
#include <math.h>

int main() {
	double lado;

	printf("Dimension del lado del hexaedro:\n");
	scanf("%lf", &lado);

	//calcular el area de la base
	double areaBase = lado * lado;
	//calcular el area lateral
	double areaLateral = 4 * areaBase;
	//calcular el area total
	double areaTotal = 6 * areaBase;

        // Calcular el volumen (lado^3)
        double volumen = lado * lado * lado;

        // Mostrar los resultados
        printf("Área de la base: %.2lf unidades cuadradas\n", areaBase);
        printf("Área lateral: %.2lf unidades cuadradas\n", areaLateral);
        printf("Área total: %.2lf unidades cuadradas\n", areaTotal);
        printf("Volumen: %.2lf unidades cúbicas\n", volumen);

return 0;

}
