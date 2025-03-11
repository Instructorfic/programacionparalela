//dado la dimensión del lado de un hexaedro, calcular área base, área lateral
//área total y volumen
//3 de marzo de 2025

#include <stdio.h>
#include <math.h>
int main(){
float abase,lado,alateral,atotal,volumen;

printf("intruduce la medida del lado:\n");
scanf("%f", &lado);

abase = lado * lado;

alateral = 4 * abase;

atotal = 6 * abase;

volumen = lado * lado * lado;

printf("área base= %f\n",abase);
printf("área lateral= %f\n",alateral);
printf("área total= %f\n",atotal);
printf("volumen= %f\n",volumen);

return 0;
}
