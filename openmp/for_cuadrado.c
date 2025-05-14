#include <stdio.h>
#include <omp.h>
#define N_ELEMENTOS 20

int main() {
    int a[N_ELEMENTOS];
    int n_hilo[N_ELEMENTOS];

    // #ifndef OMP_NUM_THREADS
    // omp_set_num_threads(16);
    // #endif

    printf("Usando %d hilos\n", omp_get_max_threads());

    #pragma omp parallel
    #pragma omp for
    for (int i=0; i<N_ELEMENTOS; i++) {
        a[i] = i*i;
        n_hilo[i] = omp_get_thread_num();
        // printf("Se asignó %d a elemento de arreglo %d con hilo %d\n", a[i], i, n_hilo[i]);
    }

    for (int i=0; i<N_ELEMENTOS; i++) {
        printf("a[%.2d] = %d, escrito por hilo %d\n", i, a[i], n_hilo[i]);
    }
}