#include<stdio.h>

int main(){
	//VARIABLES
	int a,b;
	int division;
	int restos;

	//ENTRADA DE DATOS
	printf("Ingresa el valor de A: \n");
	scanf("%d",&a);
	printf("Ingresa el valor de A: \n");
	scanf("%d",&b);
	//OPERACION
	division= b/a;
	restos=b%a;

	//IMPRIMIR LOS RESULTADOS
	printf("%d \n",division);
	printf("%d \n",restos);
}
