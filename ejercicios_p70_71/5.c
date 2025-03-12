//////////////////////////////
// 5. PROGRESIÓN GEOMÉTRICA //
// AUTOR: M. VEGA GUSTAVO   //
//////////////////////////////

#include <stdio.h>

double pow(double x, int n) {
	if (n < 0) {
		x = 1/x;
		n = -n;
	}
	double total = 1;
	for (int i=0; i<n; i++) {
		total *= x;
	}
	return total;
}

int main() {
	printf("Ingrese un número x cualquiera y otro n entero:\n");
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	double suma = 1;
	for (int i=1; i<n; i++) {
		suma += pow(x,i);
		printf("\r%lf", suma);
	}
	printf("\n");
	printf("1+x+x^2+…+x^n: %f\n", suma);
}
