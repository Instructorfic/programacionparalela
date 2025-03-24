#include<stdio.h>
#include<math.h>
int main(){

	//VARIABLES
	int x,n;
	
	//ENTRADA DE DATOS
	printf("Ingresa x:");
	scanf("%d",&x); 
	printf("Ingresa n:");
	scanf("%d",&n);

	//OPERACIONES
	double suma=1;
	for(int i;i<n;i++){
		suma+=pow(x , i);
	}
	printf("El valor total de la suma es: %.2f\n",suma);

	return 0;
}
