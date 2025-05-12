#include <stdio.h>
#include <omp.h>

int main(){
    #pragma omp parallel num_threads(16)
    {
        int idHilo, numeroHilos, numeroCPUS;
        /* obtiene el ID de la hilo actual */
        idHilo = omp_get_thread_num();
        numeroHilos = omp_get_num_threads();
        numeroCPUS = omp_Get_num_procs();
            if (idHilo == 0){
                printf("Numero de CPUs = %d \n", numeroCPUS);
                printf("Numero de Hilos Totales = %d \n", numeroHilos);

            }
    }
    return 0;
}
