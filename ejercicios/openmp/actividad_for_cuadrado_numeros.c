#include <stdio.h>
#include <omp.h>

int main() {
    int totalElementos = 8;
    int datosEntrada[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int datosSalida[totalElementos];


    #pragma omp parallel for
    for (int i = 0; i < totalElementos; i++) {
        datosSalida[i] = datosEntrada[i] * datosEntrada[i];
        printf("Hilo %d: %d^2 = %d\n", omp_get_thread_num(), datosEntrada[i], datosSalida[i]);
    }


    printf("\nResultados:\n");
    for (int i = 0; i < totalElementos; i++) {
        printf("salida[%d] = %d\n", i, datosSalida[i]);
    }

    return 0;
}
