#include <stdio.h>
#include <omp.h>

int main (){
	#pragma omp parallel
	{
		int i;
		printf("Hola Mundo\n");
		for(i=0;i<6;i++)
			printf("Iteración: %d\n",i);
	}
	printf("Bye");
}
