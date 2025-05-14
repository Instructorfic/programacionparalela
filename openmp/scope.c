#include <stdio.h>
#include <omp.h>

int main() {
    int vprivada = 0;
    int vcompartida = 1;

    printf("Hilo\tValor\n");
    #pragma omp parallel shared(vcompartida) private(vprivada)
    {
        int current_thread = omp_get_thread_num();
        vprivada |= 1<<current_thread;
        vcompartida |= 1<<3;
        printf("%d\t%d\n", current_thread, vprivada);
    }

    printf("privada: %d\ncompartida: %d\n", vprivada, vcompartida);
}