#include <stdio.h>

int main (){
	int rango,num,i;
	printf("Ingrese el numero de rango de numeros:");
	scanf("%d",&rango);
	
	for(i = 1; i<rango+1;i++){
	//printf("%d\n",i);
		if (i%2==0){
		printf("%d es par\n",i);
		}else {
			printf("%d es impar \n",i);
			}
	}
} 
