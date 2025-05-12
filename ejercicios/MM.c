//tema:memoria dinamica

#include <stdio.h>
#include <stdlib.h>

int main (){
//part1: definicion de variables
int cantidadNumeros;
printf("¿cuantos numeros deseas proporcionar?");
scanf("%d", &cantidadNumeros);


//part2: asignacion de memoria para n-enteros
int *arregloNumeros = malloc(cantidadNumeros * sizeof(int));

if(arregloNumeros == NULL){
printf("ocurriria un error al asignar memoria \n");
return 1;
}

//part3: lectura de datos
printf("proporcione %d numeros: \n",cantidadNumeros);

for(int i=0; i < cantidadNumeros; i++){
printf("numero %d",i + 1);
scanf("%d", &arregloNumeros[i]);
}

//part4: calcular el promedio
int suma=0;
for(int i=0;i<cantidadNumeros;i++){
suma += arregloNumeros[i];
}

float promedio = (float) suma / cantidadNumeros;
printf("el promedio es: %.2f\n",promedio);

//PART5-liberar la memoria:
free(arregloNumeros);
arregloNumeros = NULL;


return 0;
}
