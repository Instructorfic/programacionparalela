#include <stdio.h>

int main() {
	float a, b, c;
	printf("Ingrese tres números\n");
	scanf("%f %f %f", &a, &b, &c);
	if ((a >= b && b >= c) || (c >= b && b >= a)) printf("%f es el número medio\n", b);
	if ((b >= c && c >= a) || (a >= c && c >= b)) printf("%f es el número medio\n", c);
	if ((c >= a && a >= b) || (b >= a && a >= c)) printf("%f es el número medio\n", a);
}
