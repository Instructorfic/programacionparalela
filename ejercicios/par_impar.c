#include<stdio.h>

int main(){
	unsigned int x, i;

	printf("Teclee el número máximo para el rango: ");
	scanf("%d",&x);

	printf("\nNúmeros pares\n");
	for(i=0;i<=x;i++){
		if(i%2==0)
			printf("%d ",i);
	}

	printf("\n\nNúmeros impares\n");
	for(i=0;i<=x;i++){
		if(i%2!=0)
			printf("%d ",i);
	}
	printf("\n");

	return 0;
}
