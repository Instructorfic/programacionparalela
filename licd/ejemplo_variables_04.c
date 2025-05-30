// Lunes 19-Mayo-2025

#include <stdio.h>
#include <omp.h>

int main() {
	int contador=0;
	int suma=0;

	#pragma omp parallel for reduction(+:suma)	//shared(contador)
	for(int i=0; i<1000; i++) {
		#pragma omp atomic
		contador++;
		suma+=i*2;
	}

	printf("Valor final de la variable sumas es: %d\n", suma);
return 0;
}
