#include<stdio.h>
int main(){
int x,n;
printf("pon el numero x");
scanf("%d",&x);

printf("pon el numero n.");
scanf("%d",&n);

int contador = 1;

int sumatoria = 1;

for(int i = 0; i < n;i++){
contador = contador *x;
sumatoria = sumatoria + contador;
}


printf("\n el valor resultante fue: %d", sumatoria);
return 0;
}
