//Lee una hora(hora,minutos,segundos) y diga la hora que será un segundo despues
//Raúl Fernando Cruz Moreno
#include<stdio.h>

int main(){
	int hora,minutos,segundos;
	printf("Ingrese la hora: ");
	scanf("%d",&hora);
	printf("Ingrese los minutos: ");
	scanf("%d",&minutos);
	printf("Ingrese los segundos: ");
	scanf("%d",&segundos);

	segundos++;
	if (segundos >= 60){
		minutos++;
		segundos=segundos-60;
	}
	if (minutos >= 60){
		hora++;
		minutos=minutos-60;
	}
	if (hora >=24 ){
		hora=hora-24;
	}
	printf("Hora: %d:%d:%d\n",hora,minutos,segundos);
	return 0;
}
