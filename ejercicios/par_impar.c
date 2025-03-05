#include <stdio.h>

int main(){
	int n,i;
	printf("Ingrese un número: ");
	scanf("%d",&n);

	for(i=0;i<=n;i++){
		if(i%2==0){
			printf("%d es par\n",i);
		}
		else{
			printf("%d es impar\n",i);
		}

	}
	return 0;
}
