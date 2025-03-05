#include <stdio.h>

int main(){
	int  tamano1, tamano2, tamano3;
	printf("Ingresa las medidas de la primera cara\n");
	scanf ("%d",&tamano1);
//	printf("%ls",&tamano1);

	printf("Ingresa la segunda medida\n");
	scanf("%d",&tamano2);

	printf("Ingresa la tercera medida de la cara\n");
	scanf("%d",&tamano3);
//condicional 
	if (tamano1 == tamano2 && tamano1 == tamano2){
	printf("Es un triangulo Equilatero\n");
	}else if(tamano1 != tamano2 && tamano1 == tamano3){
	printf("Es un triangulo Isoceles\n");
	}else {
	printf("Es un triangulo Escaleno\n");
	}

	return 0;
}
