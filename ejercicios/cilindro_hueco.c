#include<stdio.h>
#include<math.h>

int main(){
    float radio_interior, radio_exterior, altura, superficie, volumen;

    printf("Introduce el radio interior del cilindro hueco: ");
    scanf("%f", &radio_interior);
    printf("Introduce el radio exterior del cilindro hueco: ");
    scanf("%f", &radio_exterior);
    printf("Introduce la altura del cilindro hueco: ");
    scanf("%f", &altura);

    // calcular área de la superficie
    superficie = 2 * M_PI * (radio_exterior + radio_interior) * altura + 2 * M_PI * (pow(radio_exterior, 2) - pow(radio_interior, 2));
    // calcular volumen
    volumen = M_PI * (pow(radio_exterior, 2) - pow(radio_interior, 2)) * altura;

    // Imprimir los resultados
    printf("Superficie del cilindro hueco: %.2f\n", superficie);
    printf("Volumen del cilindro hueco: %.2f\n", volumen);

    return 0;
}
