#include<stdio.h>
#include<math.h>

int main(){

	//VARIABLES
	double capital,interesanual;
	double meses=0;

	//ENTRADA DE DATOS
	printf("Ingresa el capital inicial disponible: \n");
	scanf("%lf",&capital);
	printf("Ingresa el porcentaje del interes anual: \n");
	scanf("%lf",&interesanual);

	//PROCESOS Y SALIDAS
	interesanual= interesanual/100;
	meses= log(2) / log(1 + interesanual / 12);
	printf("Tu capital se va a duplicar aproximadamente %.2f meses \n",meses);

return 0;
}
