#include <stdio.h>
#include <omp.h>
#define N_ELEMENTOS 20
#define N_HILOS 16

int main() {
    int a[N_ELEMENTOS];
    int n_hilo[N_HILOS];

    omp_set_num_threads(N_HILOS);

    #pragma omp parallel
    #pragma omp for
    for (int i=0; i<N_ELEMENTOS || i<N_HILOS; i++) {
        a[i] = i*i;
        n_hilo[i] = omp_get_thread_num();
        printf("Se asignó %d a elemento de arreglo %d con hilo %d\n", a[i], i, n_hilo[i]);
    }

    for (int i=0; i<N_ELEMENTOS || i<N_HILOS; i++) {
        printf("a[%d] = %d, escrito por hilo %d\n", i, a[i], n_hilo[i]);
}