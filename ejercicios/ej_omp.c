#include<stdio.h>
#include<omp.h>

int main(int argc, char *argv[]){

printf("Hola mundo\n");
omp_set_num_threads(4);
#pragma omp parallel
{
printf("Hola desde el hilo\n");
}
return 0;
}
