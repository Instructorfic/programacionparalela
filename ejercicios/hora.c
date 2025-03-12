/*
OBJETIVO: Escriba un programa que lea una hora (hora,
minutos, segundos) y diga la hora que será un
segundo después.
NOMBRE: Kevin Alexander Serrano Payán
FECHA: 12-03-2025
*/

#include <stdio.h>

int main(){
	short int h, m , s;

	printf("Teclee el valor de (hora, minuto y segundo) separadas por espacio: ");
	scanf("%hd",&h);
	scanf("%hd",&m);
	scanf("%hd",&s);

	//calculos
	s+=1;

	if(s>=60){
		s=0;
		m+=1;
	}
	if(m>=60){
		m=0;
		h+=1;
	}
	if(h>=24){
		h=0;
		m=0;
		s=0;
	}
	printf("La hora sieguiente es %hd:%hd:%hd\n",h,m,s);

	return 0;
}
