#include<stdio.h>
int main(){
int a;
int b;

printf("Ingrese los datos a multiplicar y sumar \n");
scanf("%d",&a);
scanf("%d",&b);

int sumatoriaA=0;
int sumatoriaB=0;
int i;
int producto;
for(i=1;i<=a;i++){
sumatoriaA=sumatoriaA + i;
}

for(i=1;i<=b;i++){
sumatoriaB=sumatoriaB + i;

}

printf("La sumatoria de la sucesion del primer numero es %d \n",sumatoriaA);
printf("La sumatoria de la sucesion del segundo numero es %d \n",sumatoriaB);

producto= sumatoriaA * sumatoriaB;

printf("El producto de las sumatorias es %d \n ",producto);

}

