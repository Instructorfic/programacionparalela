#include<stdio.h>
#include<omp.h>

int main(){

	int contador = 0;
	int suma=0;

	#pragma omp parallel for reduction(+:suma)
	for (int i=0; i < 1000; i++){
	contador++;
	suma += i * 2;
	}

	printf("Valor final de la variable suma es: %d\n",suma);
return 0;
}
