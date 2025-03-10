//Division entera sin uso de operadores
//Raul Fernando Cruz Moreno
#include <stdio.h>

int main(){
	int a,b;
	printf("Ingrese un numero entero: ");
	scanf("%d",&a);
	printf("Ingrese otro numero entero: ");
	scanf("%d",&b);
	
	int cociente=0;
	int residuo=a;
	
	while((cociente+1) * b <= a){
			cociente++;
	}
	residuo=a-(cociente*b);
	printf("Cociente=%d\n",cociente);
	printf("Residuo=%d\n",residuo);
	return 0;
}
