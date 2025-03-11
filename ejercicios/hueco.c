#include <stdio.h>
#include <math.h>
int main(){

float ri,re,h,superficie,volumen;
const float pi = 3.1416;

printf("radio interior:\n");
scanf("%f",&ri);

printf("radio exterior:\n");
scanf("%f",&re);

printf("altura:\n");
scanf("%f",&h);

superficie = (2*pi*re*h) + (2*pi*ri*h) + (2*pi * ((re*re)-(ri*ri)));

volumen = pi * h * ((re*re)-(ri*ri));

printf("la superficie es: %.2f\n",superficie);
printf("el volumen es: %.2f\n",volumen);

    return 0;
}
