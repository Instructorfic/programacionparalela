#include <stdio.h>

void main(){
int a;
int i;
printf("escriba un numero:");
scanf("%d",&a);
	for(i=1;i<a+1;i++){

	if( i % 2  == 1 ){
	printf("el numero es %d  impar \n",i);
	}
	else if( i % 1  == 0 ){
	printf("el numero es %d par \n",i);
	}

}

}

