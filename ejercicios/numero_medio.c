#include<stdio.h>

int main(){

	//VARIABLES
	int a,b,c;

	//PROCESOS Y SALIDAS

	//Lectura de datos
	printf("Ingrese el primer valor:");
	scanf("%d",&a);
	printf("Ingrese el segundo valor:");
	scanf("%d",&b);
	printf("Ingrese el tercer valor:");
	scanf("%d",&c);

	if(a>b && a<c){
		printf("La mediana es:%d\n",a);
	}else if(b>a && b<c){
		printf("La mediana es:%d\n",b);
	}
	else{
		printf("La mediana es:%d\n",c);
	}

return 0;
}
