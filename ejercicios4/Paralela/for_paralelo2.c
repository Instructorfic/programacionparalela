#include<stdio.h>
#include<omp.h>

int main() {
int total_elementos = 10;
int arreglo[total_elementos];
#pragma omp parallel for 

for  (int i=0;i<total_elementos;i++) {
	arreglo[i] = i*i;
	printf("Hilo %d escribio arreglo[%d] = %d\n", omp_get_thread_num(),i,arreglo[i]);

}



return 0;
}
