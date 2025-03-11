//Programación paralela
//Justin Emmanuel Parra Cardenas
// Clasificación de triángulos 
// 27/02/2025

#include <stdio.h>
void main(){
int A,B,C;

printf("Ingrese la longitud del lado A:\n");
scanf("%d", &A );

printf("Ingrese la longitud del lado B:\n");
scanf("%d", &B);

printf("Ingrese la longitd del lado C\n");
scanf("%d", &C);

if (A == B && B == C && C == A){
    printf("El triangulo es equilatero \n");
}
        else if (A == B || B == C ||  C == A){
            printf("El triangulo es isosceles \n");
        }
            else
                printf("El triangulo es escaleno \n");
 
        
    }

