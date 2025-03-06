#include <stdio.h>

void main(){

int a;
printf("Introduzca la longitud de una arista del Hexaedro \n");
int areac;
int areat;
int volumen;
scanf("%d",&a);

areac = a * a;
areat = a * a * 6;
volumen = a * a * a;
printf("El area de una cara es igual a %d \n",areac);
printf("El area total es igual a %d \n",areat);
printf("El volumen es igual a %d \n",volumen);
}


