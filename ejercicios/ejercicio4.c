#include <stdio.h>
int main() {

	int a,b;
	int cociente=0;
	int residuo=0;

	printf("Ingresa el valor de A: \n");
	scanf("%d",&a);

	printf("Ingresa el valor de B: \n");
        scanf("%d",&b);

	residuo=a;

	while (residuo>=b){
	residuo -= b;
	cociente++;
	}

	printf("El cociente es: %d\n",cociente);
	printf("El residuo es: %d\n",residuo);

    return 0;
}
