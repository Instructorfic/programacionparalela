//Programa que dado un numero determinado,  que numeros son impares y cuales son impares dentro de este
#include<stdio.h>
int main(){
int x;
scanf("%d",&x);

for (int i=1;i<x+1;i++) {
printf("El numero %d es  " , i);
if(i %2 == 0) {
printf(" par\n");
}
else {
printf("impar\n");
}

}
return 0;
}
