#include<stdio.h>

void main (){
int l;

printf("pon un numero:\n");
scanf("%d",&l);

for(int i=0;;i++){
	if(i % 2 ==1){
	printf("el numero es %d impar \n",i);
	}else if (i % 2 == 0){
	printf("el numero es %d par \n",i);
	}
      }

}
