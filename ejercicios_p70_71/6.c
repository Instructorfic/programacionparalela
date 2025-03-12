//////////////////////////////
// 6. COMBINACIONES         //
// AUTOR: M. VEGA GUSTAVO   //
//////////////////////////////

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#define BITS sizeof(long int)*8

int ones_count(long int x) {
	int total = 0;
	for (int i=0; i<BITS; i++) {
		total += x&(1L<<i) ? 1 : 0;
	}
	#ifdef DEBUG
	printf("n_ones: OK\n");
	#endif
	return total;
}

long unsigned combinaciones_fuerza_bruta(int n, int r) {
	if (n > BITS) {
		printf("Can't calculate with n>%lu\n", BITS);
		return -1;
	}
	if (r > n) {
		return 0;
	}
	if (r == n) {
		return 1;
	}
	long unsigned bitset, total;
	bitset = total = 0;
	while (bitset < 1L<<n) {
		if (ones_count(bitset) == r) {
			#ifdef DEBUG
			printf("Subset match\n");
			#endif
			total++;
		}
		// printf("\r%lu", total);
		bitset++;
	}
	// printf("\r\n");
	return total;
}

long unsigned combinaciones(int n, int r) {
	if (r > n) return 0;
	if (r == n) return 1;
	int max_denom_factor = n - r > r ? n - r : r;
	int min_denom_factor = n - r > r ? r : n - r;

	int min_factorial[min_denom_factor];
	for (int i=1; i<=min_denom_factor; i++) {
		min_factorial[i-1] = i;
	}
	long unsigned C_n_r = 1;
	int min_contador = 0;
	for (int i = max_denom_factor+1; i<=n; i++) {
		long unsigned intermediate_result = C_n_r*i;
		if (C_n_r >= intermediate_result) {
			printf("Overflow intentando calcular las combinaciones, último valor antes de overflow: %lu\n", C_n_r);
			return -1;
		}
		C_n_r = intermediate_result;
		if ((C_n_r%min_factorial[min_contador] == 0) && (min_contador < min_denom_factor)) {
			C_n_r /= min_factorial[min_contador++];
		}
	}
	while (min_contador < min_denom_factor) {
		C_n_r /= min_factorial[min_contador++];
	}
	return C_n_r;
}

int main() {
	int n, r;
	printf("Escriba n y r\n");
	scanf("%d %d", &n, &r);
	// printf("Combinaciones_sim(%d, %d): %lu\n", n, r, combinaciones_fuerza_bruta(n, r));
	printf("Combinaciones(%d, %d): %lu\n", n, r, combinaciones(n, r));
}
