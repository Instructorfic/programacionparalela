#include <stdio.h>

void main(){

int la1,la2,la3;
printf("escriba el primer lado \n");
scanf("%d",&la1);

printf("escriba el segundo lado \n");
scanf("%d",&la2);

printf("escribaa el tercer lado \n");
scanf("%d",&la3);

if(la1 == la2 && la2 == la3 && la3 == la1)
	printf("el triangulo es equilatero \n");
         else if (la1 == la2 || la2 == la3 || la3 == la1)
	  printf("el triangulo es isoceles \n");
	    else 
	     printf(" el triangulo es escaleno \n");


}

