/*Desarrolle un programa que al recibir las
coordenadas de los vértices de un triangulo
determine su área. */
#include <stdio.h>
#include <math.h>

int main(){
	double x1, x2, x3, y1, y2, y3, area;

	printf("Coordenadas del vertice A (x1,y1): ");
	scanf("%lf %lf", &x1, &y1);
	printf("Coordenadas del vertice A (x2,y2): ");
	scanf("%lf %lf", &x2, &y2);
	printf("Coordenadas del vertice A (x3,y3): ");
	scanf("%lf %lf", &x3, &y3);

	area= (((x1*y2)+(x2*y3)+(x3*y1))-((x1*y3)+(x3*y2)+(x2*y1)))/2;
	printf("El area del triangulo es: %.2f\n", fabs(area));

return 0;
}
