#include <stdio.h>

int main(){
	int lado_a,lado_b,lado_c;

	printf("Ingrese el lado A del triangulo:");
	scanf("%d",&lado_a);
	printf("Ingrese el lado B del triangulo:");
	scanf("%d",&lado_b);
	printf("Ingrese el lado C del triangulo:");
	scanf("%d",&lado_c);

	if (lado_a==lado_b && lado_a==lado_c){
		printf("Es un triangulo equilatero\n");
	}else if(lado_a != lado_b && lado_b != lado_c && lado_a != lado_c){
		printf("Es un triangulo escaleno\n");
	}else
		printf("Es un triangulo isosceles\n");


return 0;
}
