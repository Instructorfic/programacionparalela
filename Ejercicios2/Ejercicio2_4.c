#include<stdio.h>
int main(){
int a, b;
printf("Pon el primer numero.");
scanf("%d",&a);
printf("Pon el segundo numero.");
scanf("%d",&b);
int contador=0;
for(int i=0;i<b;i++){
contador=contador+a;
}
printf("El resultado de la multiplicacion es:");
printf("\n %d",contador);
return 0;
}
