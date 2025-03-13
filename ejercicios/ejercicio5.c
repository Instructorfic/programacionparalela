#include <stdio.h>
int main() {

	int a,b,c;
	int medio;

	printf("Ingresa el valor de A: \n");
	scanf("%d",&a);

	printf("Ingresa el valor de B: \n");
        scanf("%d",&b);

	printf("Ingresa el valor de C: \n");
        scanf("%d",&c);

	if ((a>=b&&a<=c) || (a<=b&&a>=c)){
	medio=a;
	} else if ((b>=a&&b<=c) || (b<=a&&b>=c)){
	medio=b;
	} else{
	medio=c;
	}

	printf("El valor intermedio es:%d\n", medio);

    return 0;
}
