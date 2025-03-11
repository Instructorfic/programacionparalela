#include<stdio.h>
int main(){

printf("Da 2 valores enteros");
int a, b;
scanf("%d",&a);

scanf("%d",&b);

int division_real; 
division_real= a / b;
int residuo;
residuo = a % b;
printf("El resultado de la division real fue:");
printf("%d",division_real);
printf("\n y su residuo fue %d",residuo);
return 0;
}
