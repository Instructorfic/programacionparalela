#include <stdio.h>
#include <omp.h>

int main() {
int contador = 0;
	#pragma omp parallel for shared(contador)
	for(int i=0; i < 1000; i++){
	#pragma omp critical
	{
	contador++;
	}
}
printf("Valor final contador (esperando = 1000): %d\n", contador);
return 0;
}
