#include<stdio.h>
#include<math.h>
int main(){
double capital = 1;
double interes_anual;

printf("Pon el interes anual.");
scanf("%lf",&interes_anual);

interes_anual = interes_anual / 100 + 1;
//interes_anual** x = 2
//log_interes_anual(interes_anual**x) = log_interes_anual(2)
//x = log_interes_anual(2)
//Esta es la formulacion matematica que hice.
double x;

x = log(2) / log(interes_anual) ;

printf("El tiempo seria.");
printf("\n %f", x);

return 0;
}
