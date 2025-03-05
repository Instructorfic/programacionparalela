#include<stdio.h>

int main(){
	unsigned int a, b, c;
	printf("Teclee las longitudes de los lados de tu triángulo\n");
	printf("lado a: ");
	scanf("%d",&a);
	printf("lado b: ");
	scanf("%d",&b);
	printf("lado c: ");
	scanf("%d",&c);

	if(a!=b && a!=c && b!=c){
		printf("Tu triángulo es ESCALENO\n");
	}
	else if(a!=b || a!=c || b!=c){
		printf("Tu triángulo es ISÓSCELES\n");
	}
	else{
		printf("Tu triángulo es EQUILATERO\n");
	}

	return 0;
}
