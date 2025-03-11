//Determinar el numero medio dado 3 numeros
//Raúl Fernando Cruz Moreno
#include<stdio.h>

int main(){
	int a,b,c;
	printf("Ingrese el primer numero: ");
	scanf("%d",&a);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&b);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&c);

	if((a>=c || a>=b) &&(a<=b || a<=c)){
		printf("Valor medio: %d\n",a);
	}
	else if ((b>=c || b>=a) &&(b<=a || b<=c)){
		printf("Valor medio: %d\n",b);

	}
	else{
		printf("Valor medio: %d\n",c);
	}
	return 0;
}
