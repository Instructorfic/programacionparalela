#include <stdio.h>
#include <omp.h>

int main() {
	int v[30];

	omp_set_num_threads(30);

	#pragma omp parallel
	{
		int cthread = omp_get_thread_num();
		v[cthread] = omp_get_thread_num();
	}

	for (int i=0; i<30; i++) {
		printf("v[%.2d] = %d\n", i, v[i]);
	}
}
