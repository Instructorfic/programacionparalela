//Incompleto
#include <stdio.h>

int main(){
	int n,r,total,fac_n,fac_r,fac_nr;
	printf("Ingrese el numero de elementos: ");
	scanf("%d",&n);
	printf("Ingrese el numero de elementos tomados a la vez: ");
	scanf("%d",&r);

	fac_n=n;
	for (int i=n-1;i>0;i--){
		fac_n*=i;
	}


	fac_r=r;
	for (int i=r-1;i>0;i--){
		fac_r*=i;
	}

	fac_nr=(n-r);

	for (int i=(n-r)-1;i>0;i--){
		fac_nr*=i;
	}

	total=(fac_n)/((fac_r)*(fac_nr));
	printf("Total de combinaciones de %d elementos tomando %d a la vez: %d\n",n,r,total);
	return 0;
}
