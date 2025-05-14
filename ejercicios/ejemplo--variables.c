#include <stdio.h>
#include <omp.h>

int main(){
  int valorCompartido = 10;
  int valorPrivado;

#pragma omp parrallel shared(valorCompartido) private(valorPrivado)
{
	int valorPrivado = omp_get_thread_num();
	printf("Hilo %d valor_compartido = %d, valor_privado = %d\n",
        omp_get_thread_num(),valorCompartido, valorPrivado);
}
printf("Fuera de la region: valor_privado =%d\n",valorPrivado);

}
