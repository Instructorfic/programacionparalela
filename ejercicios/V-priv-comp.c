#include<stdio.h>
#include<omp.h>

int main(){

	int valorCompartido=10;
	int valorPrivado;
	
	
	#pragma omp parallel shared(valorCompartido) private(valorPrivado)
	{
		int valorPrivado = omp_get_thread_num();
		printf("Hilo %d: valor_compartido = %d, valor_privado = %d\n",omp_get_thread_num(),valorCompartido,valorPrivado);
	}

	//IMPRIMIR FUERA DE LA REGION PARA valorPrivado
	printf("Fuera de la región: valor_privado = %d\n",valorPrivado);

}
