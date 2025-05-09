#include <stdio.h>
#include <omp.h>

int main() {
	int v[30];

	#pragma omp parallel for
	for (int i=0; i<30; i++) {
		v[i] = omp_get_thread_num();
	}

	for (int i=0; i<30; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
}
