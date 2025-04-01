#include<stdio.h>

int main(){

	int a=10, b=25, c=32;
	intercambio(&a,&b,&c);
	printf("El valor de a es %d, el valor de b %d y el valor de c %d\n",a,b,c);
}


void intercambio(int *a,int *b, int *c){
	*c = *a;
	*a = *b;
	*b = *c;
}
