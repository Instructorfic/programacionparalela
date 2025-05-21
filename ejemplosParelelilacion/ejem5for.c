#include <stdio.h>
#include <omp.h>

int main(){
	int contenedor = 0;

	#pragma omp parallel for
	for (int i = 0; i < 1000; i++){
	#pragma omp atomic
		contenedor++;
}
	printf("Valor final de contador (esperado = 1000): %d\n", contenedor);
return 0;
}
