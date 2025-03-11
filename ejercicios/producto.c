//Calcular el producto de dos enteros por sumas sucesivas
//Raúl Fernando Cruz Moreno

#include <stdio.h>

int main(){
	int a,b,producto;
	printf("Ingrese un numero entero: ");
	scanf("%d",&a);
	printf("Ingrese otro numero enero: ");
	scanf("%d",&b);
	
	producto=0;
	if (a>b)
		for(int i=0;i<b;i++){
			producto+=a;
		}
	else
		for(int i=0;i<a;i++){
			producto+=b;
		}
	printf("%d x %d = %d\n",a,b,producto);

	return 0;
}
