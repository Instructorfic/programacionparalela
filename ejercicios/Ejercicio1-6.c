#include<stdio.h>
#include<math.h>

int main(){

	//VARIABLES
	int n,r;
	double factoriales;
	//INGRESAR DATOS
	printf("Ingresa el primer numero entero (n):");
	scanf("%d",&n);
	printf("Ingresa el segundo numero entero (r):");
	scanf("%d",&r);

	//PROCESOS
	if (n < r){
	printf("--La combinacion es invalida--");
	return 1;
	}
	factoriales = tgamma(n+1) / (tgamma(r+1) * tgamma(n-r+1));

	printf("El numero de combinaciones de %d elementos tomados de %d en %d es: %.0f \n",n,r,r,factoriales);
	return 0;
}
