#include <stdio.h>

int main() {
	//VARIABLES
	int hora, minutos, segundos;
	//ENTRADA DE DATOS
	printf("Ingresa la hora: ");
	scanf("%d", &hora);
	printf("Ingresa los minutos: ");
	scanf("%d", &minutos);
	printf("Inngresa los segundos: ");
	scanf("%d", &segundos);

	segundos++;
	//PROCESOS
	if (segundos == 60) {
	segundos = 0;
	minutos++;
	}
	if (minutos == 60) {
	minutos = 0;
	hora++;
	}
	if (hora == 24) {
	hora = 0;
	}

	printf("%02d:%02d:%02d\n", hora, minutos, segundos);

	return 0;
}
