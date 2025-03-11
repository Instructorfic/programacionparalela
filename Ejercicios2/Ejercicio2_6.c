#include<stdio.h>

int main() {
int n,r;
printf("Pon el valor de n");
scanf("%d",&n);
printf("Pon el valor de r");
scanf("%d",&r);

int n_factorial = 1;
int x_factorial = 1;
int n_x_factorial = 1;
int i;
for(i=n;i>0;i--) {
	n_factorial = n_factorial * i;
}
for (i=r;i>0;i--) {
	x_factorial = x_factorial * i;
}
for (i=n-r;i>0;i--) {
	n_x_factorial = n_x_factorial * i;
	}


int resultado_final;
resultado_final = n_factorial;
int resultado_final_2 = x_factorial * n_x_factorial;
resultado_final = resultado_final / resultado_final_2;

printf("El resultado final fue: %d",resultado_final);
return 0;
}
