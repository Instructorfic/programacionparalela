//Jacobo Mandujan Sergio A.
//Dado un capital inicial, a un determinado porcentaje
//de intereses anual determine en cuantos meses
//este capital se duplicara, suponiendo que el capital
//y los interese generados son reinvertido.
#include <stdio.h>

int main(){

	float capital,interes,doble_capital;
	int meses;
	printf("Ingrese el capital inicial: ");
	scanf("%f",&capital);
	printf("Ingrese el porcentaje de interes anual: ");
	scanf("%f",&interes);
	interes=interes/12;
	doble_capital=capital*2;

	capital=capital+capital*interes/100.0;
	meses=0;
	while(capital < doble_capital){
		meses++;
		capital=capital+capital*(interes/100.0);
	}
	meses++;
	printf("Meses para que el capital se duplique:%d\n",meses);
    return 0;
}
