#include<stdio.h>
void funcion_voltear(int *a_2, int *b_2, int *c_2) {
int Temporal = *a_2;
*a_2 = *b_2;
*b_2 = *c_2;
*c_2 = Temporal;
}
int main() 

{
int i;

int a;
int b;
int c;
printf("pon a:");
scanf("%d",&a);

printf("pon b:");
scanf("%d",&b);
printf("pon c:");
scanf("%d",&c);

int *apuntadora;
apuntadora= &a;
int *apuntadorb;
apuntadorb =  &b;
int *apuntadorc;
apuntadorc= &c;

funcion_voltear(apuntadora,apuntadorb,apuntadorc);
printf("\nDespues de voltear el resultado fue:");

printf("\nel valor de a es: %d", a);
printf("\nel valor de b es: %d", b);
printf("\nel valor de c es: %d", c);


return 0;
}
