#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    
float x1,y1,x2,y2,x3,y3,area;
    
    printf("introduce las coordenadas del primer vértice:\n");
    scanf("%f %f",&x1,&y1);
    
    printf("introduce las coordenadas del segundo vértice:\n");
    scanf("%f %f",&x2,&y2);
    
    printf("introduce las coordenadas del tercer vértice:\n");
    scanf("%f %f",&x3,&y3);

area = 0.5 * (abs((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));

printf("el área del triángulo es: %.2f",area);

    return 0;
}
