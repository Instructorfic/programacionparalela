//Programación Paralela
//Justin Emmanuel Parra Cardenas
//Calculo de combinacion
#include <stdio.h>
int factorial(int n){
    if (n==0) return 1;
    else
    return n*factorial(n-1);  
}
int main(){

int numero,r;
int Combinacion;

printf("Ingrese el numero:\n");
scanf("%d",&numero);

printf("Ingrese r:\n");
scanf("%d",&r);

if (r>numero)
{
    printf("El valor de r no puede ser mayor que el numero, intente de nuevo\n");
    return 1;
}

int diferencia= numero-r;

Combinacion=(factorial(numero)) / ((factorial(r)) * (factorial(diferencia)));

printf("El número de combinaciones es: %d\n",Combinacion);

return 0;
}