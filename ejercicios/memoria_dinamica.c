#include <stdio.h>
#include <stdlib.h>

int main(){

int cantidadNumeros;

printf("¿Cuantos numeros deseas ingresar?: \n");
scanf("%d",&cantidadNumeros);

//asignacion dinamica de memoria para n enteros
int *arregloNumeros = (int *)malloc(cantidadNumeros * sizeof(int));

if(arregloNumeros == NULL){
printf("Ocurrió un error al asignar memoria \n");
return 1;
}

//lectura de los numeros 
printf("proporcione %d numeros: \n", cantidadNumeros);

for(int i=0; i < cantidadNumeros; i++){
printf("Numero: %d \n" , i + 1);
scanf("%d", &arregloNumeros[i]);
}
//calculo del promedio
int suma = 0;
for(int i = 0; i < cantidadNumeros; i++){
suma += arregloNumeros[i];
}
float promedio = (float) suma / cantidadNumeros;
printf("El promedio es: %.2f\n", promedio);

//liberar memoria
free(arregloNumeros);
arregloNumeros = NULL;

return 0;
}
