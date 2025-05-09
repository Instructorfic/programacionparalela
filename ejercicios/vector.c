#include<stdio.h>
#include<omp.h>

int main(){
int tamano=30;
int numeros[tamano];

#pragma omp parallel
{
 for(int i=0;i<tamano+1;i++){
	numeros[i]=omp_get_thread_num();
	printf("%d=%d\n",i,numeros[i]);
 }
}


return 0;
}
