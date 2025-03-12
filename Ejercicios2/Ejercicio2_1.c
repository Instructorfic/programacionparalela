#include<stdio.h>
int main(){

printf("Da 2 valores enteros");
int a, b;
scanf("%d",&a);

scanf("%d",&b);

float division = a; 
division= division / b;
int division_real = division;
float residuo;
residuo = division_real;
residuo = division_real * b;
residuo = a -residuo ;

printf("El resultado de la division real fue:");
printf("%d",division_real);
printf("\n y su residuo fue %f",residuo);
return 0;
}
