#include <stdio.h>
#include <omp.h>

int main() {
    int contador = 0;

    #pragma omp parallel
    {
        for (int i = 0; i < 100; i++) {
            #pragma omp atomic
            contador++;  
        }
    }

    printf("Valor final del contador: %d\n", contador);
    return 0;
}