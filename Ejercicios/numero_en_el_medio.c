//Calculo del número medio

#include <stdio.h>
int main(void){
int a,b,c;
int medio;
    printf("Ingrese el valor a\n");
    scanf("%d",&a);

    printf("Ingrese el valor b\n");
    scanf("%d",&b);

    printf("Ingrese el valor c\n");
    scanf("%d",&c);

    if (a>b && a<c || a<b && a>c)
    {
        medio=a;
    }
   else if (b>a && b<c || b<a && b>c)
   {
    medio=b;
   }
   else
   {
    medio=c;
   }
   
   printf("El número medio es : %d\n",medio );
     
}
