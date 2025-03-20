//Jacobo Mandujan Sergio A.
//Desarrolle un programa que dados a y b enteros,
//informar el producto de ambos por sumas sucesivas.
#include <stdio.h>
int main(){
	int a,b,producto;
	printf("Ingrese dos números enteros: ");
	scanf("%d""%d",&a,&b);

	producto=0;
	if(a>b)
		for(int i=0;i<b;i++){
		producto+=a;
		}
	else
		for(int i=0;i<a;i++){
		producto+=b;
		}

	printf("%d X %d = %d\n",a,b,producto);

    return 0;
}
