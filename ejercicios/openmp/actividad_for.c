#include <stdio.h>
#include <omp.h>

int main() {
    int totalElementos = 10;
    int arreglo[totalElementos];


    #pragma omp parallel for
    for (int i = 0; i < totalElementos; i++) {
        arreglo[i] = i * 2;
        printf("Hilo %d escribió arreglo[%d] = %d\n", omp_get_thread_num(), i, arreglo[i]);
    }

    return 0;
}
