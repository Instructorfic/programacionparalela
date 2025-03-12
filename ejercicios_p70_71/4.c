#include <stdio.h>

int main() {
	int a, b;
	printf("Escriba dos números enteros:\n");
	scanf("%d %d", &a, &b);
	int a_b = 0;
	int a_abs = a > 0 ? a : -a;
	int b_abs = b > 0 ? b : -b;
	for (int i=0; i<b_abs; i++) {
		a_b += a_abs;
	}
	a_b = (a < 0) != (b < 0) ? -a_b : a_b;
	printf("%d*%d: %d\n", a, b, a_b);
}
