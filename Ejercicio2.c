#include<stdio.h>
int main(){

int radio_int,radio_ext,altura,volumen;
float superficie;
printf("Da el radio interior \n");
scanf("%d",&radio_int);
printf("Da el radio exterior. \n");
scanf("%d",&radio_ext);
printf("Da la altura. \n");
scanf("%d",&altura);
//El primero representa el cilindro hueco, y el otro los 2 circulos que contiene el cilindro
superficie = (radio_ext * (radio_ext + altura) + (radio_int * radio_int));

superficie = superficie * 6.3;

volumen = radio_ext * radio_ext;
volumen = volumen * altura;
volumen = volumen * 3.14;
printf("La superficie fue: %f", superficie);
printf("El volumen es: %d", volumen);

return 0;
}
