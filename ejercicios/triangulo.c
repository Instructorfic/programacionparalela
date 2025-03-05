#include<stdio.h>

int main(){
	int a,b,c;
	printf("Ingresa el tamaño del primer lado del triangulo: ");
	scanf("%d",&a);
	printf("Ingresa el tamaño del segundo lado del triangulo: ");
	scanf("%d",&b);
	printf("Ingresa el tamaño del tercer lado del triangulo: ");
	scanf("%d",&c);

	if (a==b && a==c && b==c){
		printf("El triangulo es equilatero\n");
	}
	else if (a!=b && a!=c && b!=c){
		printf("El triangulo es escaleno\n");
	}
	else{
		printf("El triangulo es isosceles\n");
	}
	return 0;
}
