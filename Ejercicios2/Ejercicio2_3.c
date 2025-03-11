#include<stdio.h>


int main(){ 
int hora;
int minuto;
int segundo;

printf("Pon la hora");
scanf("%d",&hora);
printf("pon el minuto");
scanf("%d",&minuto);
printf("pon el segundo");
scanf("%d",&segundo);

while (hora > 23 || minuto > 59 || segundo > 59) {
if(segundo > 59) {
	segundo = segundo - 60;
	minuto = minuto + 1;
}
if (minuto > 59) {
	minuto = minuto - 60;
	hora = hora + 1;
}
if (hora > 23) {
	hora = hora -24;
	}
}


segundo=segundo+1;


while (hora > 23 || minuto > 59 || segundo > 59) {
if(segundo > 59) {
        segundo = segundo - 60;
        minuto = minuto + 1;
}
if (minuto > 59) {
        minuto = minuto - 60;
        hora = hora + 1;
}
if (hora > 23) {
        hora = hora -24;
        }
}
printf("despues de que pase un segundo la hora es: %d",hora);
printf("despues de que pase un segundo el minuto es: %d",minuto);
printf("despues de que pase un segundo el segundo  es: %d",segundo);



return 0;
}
