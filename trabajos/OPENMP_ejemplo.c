#include <stdio.h>
#include <omp.h>

int main()
{
    printf("HOLA MUNDO \n");

    omp_set_num_threads(4);
    #pragma omp parallel
    {
         printf("HOLA MUNDO DESDE EL HILO \n");
    }
    return 0;
}