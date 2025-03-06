/*
Practica numero:4
FECHA:3-03-2025
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592653
    
int main() {

    char letra;
    float lado;
    
    printf("Ingresa la letra [C] para calcular superficie y volumen de un cilindro\n");
    printf("Ingresa la letra [H] para calcular area de hexaedro\n");
    printf("--> ");
    scanf("%c",&letra);

    switch(letra){

    case 'H':
    
    // Solicitar al usuario que ingrese el lado del hexaedro
    printf("Ingrese el lado del hexaedro: ");
    scanf("%f", &lado);

    // Calcular y mostrar el área del hexaedro

    float area = 6 * pow(lado, 2);
    printf("El área lateral es %f\n", pow(lado,2));
    printf("El área total del hexaedro con lado %f es %f\n", lado, area);
    printf("El volumen del hexaedro es %f\n", pow(lado,3));
    break;
    case 'C':

    float alturac;
    float volumen;
    float radioc;
    float areacircular;
    float superficie;
    float basec;
    float arearectangulo;

    printf("Ingresa la altura de el cilindro: ");
    scanf("%f",&alturac);
    printf("\nIngresa el radio del cilindro: ");
    scanf("%f",&radioc);
    areacircular = PI*pow(radioc,2);
    volumen=areacircular*alturac;

    //superficie
    basec = 2*PI*radioc; 

    arearectangulo = basec * alturac;
    superficie = (areacircular*2)+arearectangulo;
    
    
    printf("\nEl volumen del cilindro es de: %f cm3\n",volumen);
    printf("La superficie del cilindro es de: %f cm2\n",superficie);
    break;
    }
           
    return 0;
}

