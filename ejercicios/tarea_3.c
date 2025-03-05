#include<stdio.h>
#include<math.h>
int main(){
	float v1_x,v1_y,v2_x,v2_y,v3_x,v3_y,area,distancia,a,b,c,s;

	printf("Ingrese las coordenadas x,y del vertice 1:");
	scanf("%f",&v1_x);
	scanf("%f",&v1_y);
	printf("Ingrese las coordenadas x,y del vertice 2: ");
	scanf("%f",&v2_x);
	scanf("%f",&v2_y);
	printf("Ingrese las coordenadas x,y del vertice 3: ");
	scanf("%f",&v3_x);
	scanf("%f",&v3_y);

		
	a=sqrt((v2_x-v1_x)*(v2_x-v1_x)+(v2_y-v1_y)*(v2_y-v1_y)); 
	b=sqrt((v3_x-v2_x)*(v3_x-v2_x)+(v3_y-v2_y)*(v3_y-v2_y)); 
	c=sqrt((v1_x-v3_x)*(v1_x-v3_x)+(v1_y-v3_y)*(v1_y-v3_y));
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c)); 

	printf("Area: %f\n",area);
	return 0;
}
