#include<stdio.h>
#include<omp.h>

int main(){
	#pragma omp parallel
	{
		int i;
		printf("Hola mundo\n");
		for(i=0;i<6;i++)
			printf("Iteracion: %d\n",i);
	}
	printf("Bye");
	return 0;
}
