#include<stdio.h>
#include<omp.h>

int main(){
int tamano=10;
int numeros[tamano];

#pragma omp parallel
{
#pragma omp for
 for(int i=0;i<tamano;i++){
	numeros[i]=i*i;
	printf("Hilo %d escribio arreglo[%d]=%d\n",omp_get_thread_num(),i,numeros[i]);
 }
}

return 0;
}
