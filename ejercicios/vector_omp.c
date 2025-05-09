#include <stdio.h>
#include <omp.h>

int main(){
	int vector[30]={0};
	omp_set_num_threads(30);
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		vector[id]=id;
	}
	printf("Arreglo\n");


	for (int i=0;i<30;i++)
		printf("Vector[%d]: %d\n",i,vector[i]);

	return 0;
}
