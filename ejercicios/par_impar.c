#include<stdio.h>

int main(){
	int a,i;
	printf("Ingrese un numero: ");
	scanf("%d",&a);

	for(i=1;i<a+1;i++){
		if(i%2==0){
			printf("%d es par\n",i);
		}else{
			printf("%d es impar\n",i);
		}
	}


return 0;
}
