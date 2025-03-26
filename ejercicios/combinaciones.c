#include <stdio.h>
int n
int factorial(n){
    if (n==0) return 1;
    else
    return n*factorial(n-1);
}
int main(){

int elnumero,r;
int combi;
int diferencia= elnumero-r;

printf("Pon el numero:\n");
scanf("%d",&elnumero);

printf("pon r:\n");
scanf("%d",&r);

if (r>elnumero)
{
    printf("El valor de r no puede ser mayor al numero\n");
    return 1;
}


combi=(factorial(elnumero)) / ((factorial(r)) * (factorial(diferencia)));

printf("El numero de combinaciones es: %d\n",combi);

return 0;
}
