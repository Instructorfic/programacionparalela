#include <stdio.h>
#include <omp.h>

int main() {
	int valor_compartido = 10;
	int valor_privado;

	#pragma omp parallel shared(valor_compartido) private(valor_privado)
	{
	int valor_privado = omp_get_thread_num();
	printf("Hilo %d: Valor Compartido = %d, Valor Privado = %d\n"
	,omp_get_thread_num(), valor_compartido, valor_privado);
	}

printf("Fuera de la region: Valor Privado = %d\n", valor_privado);
return 0;
}
