#include <stdio.h>

int main() {
	int hora, minutos, segundos;
	printf("Ingrese la hora, minuto y segundo:\n");
	scanf("%d %d %d", &hora, &minutos, &segundos);
	segundos = (segundos+1)%60;
	if (segundos == 0) {
		minutos = (minutos+1)%60;
	}
	if (minutos == 0) {
		hora = (hora+1)%24;
	}
	printf("La siguiente hora es %d:%d:%d\n", hora, minutos, segundos);
}
