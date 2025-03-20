//Jacobo Mandujan Sergio A.
//Realizar un programa que lea 2 números x y n y
//calcule la suma: 1 + x1 + x2 + x 3 + xn
#include <stdio.h>
int main(){
	int x,n,suma,x_ni;
	printf("Ingresa un numero x: ");
	scanf("%d",&x);
	printf("Ingresa un numero n: ");
	scanf("%d",&n);

	suma=1+x;
	x_ni=x;
	for (int i=1;i<n;i++){
		x_ni*=x;
		suma+=x_ni;
	}
	printf("Resultado: %d\n",suma);

    return 0;
}
