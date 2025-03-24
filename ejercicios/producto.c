#include<stdio.h>

int main(){

	//VARIABLES
	int a,b,M;
	int suma=0;

	//ENTRADA DE DATOS
	printf("Ingrese el primero valor entero: ");
	scanf("%d",&a);
	printf("Ingrese el segundo valor entero: ");
	scanf("%d",&b);

	//PROCESOS Y SALIDAS
	for(int i=0;i<b;i++){
		suma=suma+a;
	}
	printf("El producto de %d y %d es: %d \n",a,b,suma);


return 0;
}
