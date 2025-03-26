#include<stdio.h>

void incrementa(int *var){
	(*var)++;
       }

int main(){
int x = 1;
incrementa(&x);
}

