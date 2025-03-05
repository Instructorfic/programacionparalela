#include<stdio.h>
#include <math.h>
int main() {
int x0,x1,x2;
int y0,y1,y2;

printf("Pon coordenadas de triangulo.");

	printf("x: ");
	scanf("%d", &x0);
	printf("y: ");
	scanf("%d", &y0); 

	 printf("x: ");
        scanf("%d", &x1);
        printf("y: ");
        scanf("%d", &y1); 
	
	 printf("x: ");
        scanf("%d", &x2);
        printf("y: ");
        scanf("%d", &y2); 

int tamano_a, tamano_b;
int a,b,c;
tamano_a = (x0 - x1);
tamano_a = tamano_a * tamano_a;
tamano_b = y0 - y1;
tamano_b = tamano_b * tamano_b;
a = tamano_a + tamano_b;
a= sqrt(a);
tamano_a = (x0 - x2);
tamano_a = tamano_a * tamano_a;
tamano_b = y0 - y2;
tamano_b = tamano_b * tamano_b;
b = tamano_a + tamano_b;
b = sqrt(b);

tamano_a = (x1 - x2);
tamano_a = tamano_a * tamano_a;
tamano_b = y1 - y2;
tamano_b = tamano_b * tamano_b;
c= tamano_a + tamano_b;
c=sqrt(c);
printf("El primer lado vale %d", a);
printf("El segundo lado vale %d", b);
printf("El  tecer lado vale %d", c);

return 0;

}
