#include<stdio.h>

int main(){

	int a,b,M,suma;
	//ENTRADAS DE DATOS
	printf("Ingresa el primer numero entero:");
	scanf("%d",&a);
	printf("Ingresa el segundo numero entero:");
	scanf("%d",&b);
	suma=0;
	
	//PROCESOS
	for (int i=0; i<b;i++){
	suma= suma + a;
	}
	printf("El producto de %d y %d es: %d \n",a,b,suma);

}
