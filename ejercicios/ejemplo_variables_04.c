#include<stdio.h>
#include<omp.h>

int main(){
	int contador=0;

	#pragma omp parallel for reduction(+:contador)
	for(int i=0;i<1000;i++){
		contador++;
	}

	printf("Valor final de contador (esperado = 1000): %d\n",contador);

return 0;
}
