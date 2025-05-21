#include <stdio.h>
#include <omp.h>

int main(){
	int contenedor = 0;
	int suma = 0;
	#pragma omp parallel for reduction(+:suma)
	for (int i = 0; i < 1000; i++){
		contenedor++;
		suma += i*2;
}
	printf("Valor final de contador (esperado = 1000): %d\n", contenedor);
	printf("Valor final de suma = %d\n", suma);
return 0;
}
