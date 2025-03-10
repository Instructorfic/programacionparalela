#include<stdio.h>

int main(){

	//VARIABLES
	int a,b;
	float resultado;
	float residuo;

	//PROCESOS Y SALIDAS
	printf("Ingrese el valor de A: ");
	scanf("%d",&a);
	printf("Ingrese el valor de B: ");
	scanf("%d",&b);

	//division entera
	resultado=a/b;
	residuo=a%b;

	printf("El resultado es: %f\n El residuo es: %f",resultado,residuo);


return 0;
}
