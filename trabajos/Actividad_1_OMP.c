#include <stdio.h>
#include <omp.h>

int main()
{
    int i;

    printf("HOLA MUNDO \n");

    // Bucle paralelizado con OpenMP
    #pragma omp parallel for
    for(i = 0; i < 6; i++)
    {
        printf("Iteración: %d desde el hilo %d\n", i, omp_get_thread_num());
    }

    printf("BYE\n");

    return 0;
}
