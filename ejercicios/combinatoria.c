//Calcular el número de combinaciones de n elementos tomando r a la vez
//Raúl Fernando Cruz Moreno
#include <stdio.h>

int main(){
	int n,r,total,fac_n,fac_r,fac_nr;
	printf("Ingrese el numero de elementos: ");
	scanf("%d",&n);
	printf("Ingrese el numero de elementos tomados a la vez: ");
	scanf("%d",&r);
	
	if (r>n){
		printf("El numero de elementos tomados a la vez no puede ser mayor al numero total de elementos\n");
		return 0;
	}

	fac_n=1;
	for (int i=2;i<=n;i++){
		fac_n*=i;
	}
	printf("%d\n",fac_n);

	fac_r=1;
	for (int i=2;i<=r;i++){
		fac_r*=i;
	}

	printf("%d\n",fac_r);
	fac_nr=1;

	for (int i=2;i<=(n-r);i++){
		fac_nr*=i;
	}

	printf("%d\n",fac_nr);
	total=(fac_n)/((fac_r)*(fac_nr));
	printf("Total de combinaciones de %d elementos tomando %d a la vez: %d\n",n,r,total);
	return 0;
}
