#include<stdio.h>

int main() {
int radio;
float PI = 3.1416;
printf("Pon el radio de la esfera.\n");
scanf("%d", &radio);
float Area= radio * 4 * radio;
Area = Area * PI;
float Volumen = 4 * radio * radio * radio;
Volumen = Volumen / 3;
Volumen = Volumen * PI;
printf("\nEl area de la esfera es: %f", Area);
printf("\nEl volumen de la esfera es: %f", Volumen);
printf("\n");

return 0;
}
