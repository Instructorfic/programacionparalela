#include <stdio.h>
#include <omp.h>

int main() {
    int valorCompartido = 20;
    int valorPrivado; 

    #pragma omp parallel shared(valorCompartido) private(valorPrivado)
    {
        valorPrivado = omp_get_thread_num();
        printf("Hilo %d: valor compartido = %d, valor privado = %d\n",
            omp_get_thread_num(), valorCompartido, valorPrivado);
    }

    printf("Fuera de la región: valor privado = %d\n", valorPrivado);

    return 0;
}