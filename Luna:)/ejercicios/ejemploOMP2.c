#include <stdio.h>
#include <omp.h>

int main () {
printf("Hola mundo\n");

omp_set_num_threads(4);
#pragma omp parallel
{
	int id = omp_get_thread_num();
	printf("Hola desde el hilo (%d)\n",id);
}

return 0;
}
