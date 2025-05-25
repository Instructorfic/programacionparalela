#include <stdio.h>
#include <omp.h>

int main() {
    int x = 100;

    #pragma omp parallel shared(x) private(y)
    {
        y = 0;
        y = omp_get_thread_num(); 
        printf("Hilo %d: x (compartido) = %d, y (privado) = %d\n", omp_get_thread_num(), x, y);
    }

    return 0;
}
