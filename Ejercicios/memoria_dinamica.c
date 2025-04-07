#include <stdio.h>
#include <stdlib.h>

int main(){
int cantidadNumeros;
printf("¿Cuantos numeros deseas proporcionar? \n");
scanf("%d",&cantidadNumeros);
int *arregloNumeros=(int *)malloc(cantidadNumeros * sizeof(int));
int suma=0;
if(arregloNumeros == NULL ){
printf("Ocurrio un error al asignar la memoria \n");

return 1;

}
printf("Proporcione %d numeros  \n",cantidadNumeros);

for(int i=0; i<cantidadNumeros; i++){
printf("Numero %d : ",i+1);
scanf("%d",&arregloNumeros[i]);

}
for(int i=0; i<cantidadNumeros; i++){
suma += arregloNumeros[i];
}
float promedio= (float) suma / cantidadNumeros;

printf("El promedio es igual a %.2f \n",promedio);

free(arregloNumeros);
arregloNumeros=NULL;
return 0;

}
