//Justin Emmanuel Parra Cardenas
//Programación Paralela
//Práctica 03 03/03/2025
//Cilindro

#include <stdio.h>
#include <math.h>

int main() {
    double ri, re, h, S, V;

    printf("Ingrese el radio interno:\n");
    scanf("%lf", &ri);  
    printf("Ingrese el radio externo:\n");
    scanf("%lf", &re);  
    printf("Ingrese la altura:\n");
    scanf("%lf", &h);  

    V = M_PI * h * ((re * re) - (ri * ri));  
    S = (2 * M_PI * h * (re + ri)) + (2 * M_PI * ((re * re) - (ri * ri)));  

    printf("La superficie del cilindro hueco es: %.2f\n", S); 
    printf("El volumen del cilindro hueco es: %.2f\n", V);  

    return 0;
}
