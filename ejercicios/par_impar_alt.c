#include <stdio.h>

int main(){
	int n,i;
	printf("Ingrese un número: ");
	scanf("%d",&n);
	
	printf("Pares\n");
	for(i=0;i<=n;i+=2){
		printf("%d ",i);

	}
	printf("\n");
	printf("Impares\n");
	for(i=1;i<=n;i+=2){
		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
