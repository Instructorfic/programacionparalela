#include <stdio.h>
#include <omp.h>

int main(){
        int valorCompartido = 10;
        int valorPrivado;

        #pragma omp parallel shared(valorCompartido) private(valorPrivado)
        {
                int valorPrivado = omp_get_thread_num();
                printf("hilo %d: valor_compartido = %d; valor_Privado = %d\n",
                 omp_get_thread_num(),valorCompartido, valorPrivado);
        }

                printf("fuera de region : valor_Privado = %d\n", valorPrivado);
}



