#include <stdio.h>
#include <stdlib.h>
int main(){
int cantidadNumeros;
printf("¿Cuantos numeros deseas proporcionar?");
scanf("%d",&cantidadNumeros);

//Asignacion dinamica de memoria para n enteros
int *arregloNumeros = (int *)malloc(cantidadNumeros * sizeof(int));
if(arregloNumeros == NULL){
	printf("ocurrio un error al asignar la memoria \n");
	return 1;
}

//Lectura de  los numeros
printf("Proporcine %d numeros:\n",cantidadNumeros);

for(int i=0; i<cantidadNumeros; i++){
printf("Numero %d: ",i+1);
scanf("%d",&arregloNumeros[i]);
}
//calculo del promedio
int suma=0;
for(int i=0; i<cantidadNumeros; i++){
	suma+=arregloNumeros[i];
}
float promedio = (float) suma / cantidadNumeros;
printf("El promedio es %f\n",promedio);
//liberar la memoria
free(arregloNumeros);
arregloNumeros=NULL;
return 0;
}
