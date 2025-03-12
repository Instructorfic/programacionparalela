#include <stdio.h>

int main() {
	float capital_inicial, tasa_interes_anual;
	printf("Ingrese el capital inicial y el porcentaje de interés anual:\n");
	scanf("%f %f", &capital_inicial, &tasa_interes_anual);
	tasa_interes_anual /= 100.0;
}
