//Calcula la suma 1+x^1+x^2+x^3+x^n dado x y n
//Raúl Fernando Cruz Moreno
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
