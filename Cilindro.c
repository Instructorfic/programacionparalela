#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    double radioInterior, radioExterior, altura;
    double areaLateral, areaBase, areaTotal, volumen;

    printf("Introduce el radio interior del cilindro: ");
    scanf("%lf", &radioInterior);
    printf("Introduce el radio exterior del cilindro: ");
    scanf("%lf", &radioExterior);
    printf("Introduce la altura del cilindro: ");
    scanf("%lf", &altura);

    if (radioExterior <= radioInterior) {
        printf("Error: El radio exterior debe ser mayor que el radio interior.\n");
        return 1;
    }

    areaBase = PI * (pow(radioExterior, 2) - pow(radioInterior, 2));

    areaLateral = 2 * PI * (radioExterior + radioInterior) * altura;

    areaTotal = areaLateral + 2 * areaBase;

    volumen = PI * (pow(radioExterior, 2) - pow(radioInterior, 2)) * altura;

    printf("\nResultados:\n");
    printf("Área de la base: %.2lf\n", areaBase);
    printf("Área lateral: %.2lf\n", areaLateral);
    printf("Área total: %.2lf\n", areaTotal);
    printf("Volumen: %.2lf\n", volumen);

    return 0;
}
