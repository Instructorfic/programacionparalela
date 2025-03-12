#include <stdio.h>
#include <math.h>

int main(void){
int x,n;
double suma=0.0;

printf("Ingrese el valor de x:\n");
scanf("%d",&x);

printf("Ingrese el valor de n:\n");
scanf("%d",&n);

for(int i=0;i<=n;i++){
    suma+=pow(x,i);
}

printf("La seria de potencias de x es: %.2f\n", suma);
}

