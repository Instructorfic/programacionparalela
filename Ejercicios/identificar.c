#include<stdio.h>

void main(){
int N;
int i;
printf("introduzca un numero:");
scanf("%d",&N);

	for(i=1;;i++){
		if( i % 2 == 1 ){
		printf("El numero es %d es impar \n",i);
		}
		else if( i % 2 == 0 ){
		printf("El numero es %d es par \n",i);

		}
	}





}
