#include <stdio.h>
#include <omp.h>

int main (int argc, char * argv[]){

printf("hola mundo \n");
omp_set_num_threads(4);
#pragma omp parallel

{
printf("hola desde el hilo \n");


printf("pollo asado \n");
}
return 0;
}
