#include<stdio.h>
#include<omp.h>

int main(){

	int contador = 0;

	#pragma omp parallel for shared(contador)
	for (int i=0; i < 1000; i++){
	#pragma omp atomic
		contador++;
	}

	printf("Valor final de contador (esperado = 1000): %d\n",contador);
return 0;
}
