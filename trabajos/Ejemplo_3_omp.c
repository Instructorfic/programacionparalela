#include <stdio.h>
#include <omp.h>

int main(){
    omp_set_num_threads(4) //Para solicitar un determinado numero de hilos
    #pragma omp parallel
        {
            int id = omp_get_thread_num();
            printf("Hilo (%d) \n", id);
        }
    return 0;
}
