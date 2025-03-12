////////////////////////////////
// 7. CRECIMIENTO POR INTERÉS //
// AUTOR: M. VEGA GUSTAVO     //
////////////////////////////////

#include <stdio.h>

int main() {
	float capital_inicial, tasa_interes_anual;
	printf("Ingrese el capital inicial y el porcentaje de interés anual:\n");
	scanf("%f %f", &capital_inicial, &tasa_interes_anual);
	tasa_interes_anual /= 100.0;
	float capital_actual = capital_inicial;
	int meses_transcurridos = 0;
	while (capital_actual < capital_inicial*2) {
		capital_actual += capital_actual*tasa_interes_anual/12;
		meses_transcurridos++;
	}
	printf("Se dobla el interés a %f$, en %d meses\n", capital_actual, meses_transcurridos);
}
