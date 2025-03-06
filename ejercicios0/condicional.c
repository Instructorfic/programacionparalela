//Clasificar tipo trignaulo funcion en sus lados

#include<stdio.h>
int main(){
int lado1,lado2,lado3;
printf("Pon los 3 lados de un triangulo\n");
printf("1:");
scanf("%d",&lado1);
printf("2:");
scanf("%d",&lado2);
printf("3:");
scanf("%d",&lado3);
int contador=0;

if(lado1 == lado2) 
contador=contador+1;
if(lado1 == lado3) 
contador=contador+1;

if(lado2 == lado3) 
contador=contador+1;
if(contador == 3) {
	printf("El triangulo es equilatero");
}
	else {
	if	(contador >0) {
	printf("El triangulo es isosceles");
	}
	else {
	printf("El triangulo es escaleno");
	}
	
	
}
return 0;

}
