/* Programacion Paralela, ejemplo de un apuntador.
20/Marzo/2025 */

#include <stdio.h>

void incrementa (int *var){
	(*var)++;
}

int main(){
	int x=1;
	incrementa (&x); // x pasa a valer 2
}
