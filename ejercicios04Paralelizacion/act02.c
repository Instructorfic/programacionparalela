#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
int main() {
	int tamanio, num_buscar, ind=-1;
	printf("Proporcione el tamaño del arrgelo: ");
	scanf("%d",&tamanio);
	int arreglo[tamanio];

	printf("Proporcione los datos del arreglo: \n");
	for(int i=0; i<tamanio; i++){
	printf("arreglo[%d]: \n",i);
	scanf("%d",&arreglo[i]);
	}

	printf("Proporcione el numero a buscar: ");
	scanf("%d",&num_buscar);
/*
	for(int i=0; i<tamanio; i++)
		arreglo[i]=rand () % 100;
*/
	#pragma omp parallel for
	for(int i=0; i<tamanio; i++)
		#pragma omp critical
		{
		if(num_buscar==arreglo[i])
			ind=i;
		}
	if(ind>=0)
	printf("Proporcione el numero %d se encontro en la posicion: %d\n",num_buscar,ind);
	else
		printf("El numero no se encontro\n ");
	
for(int i=0; i<tamanio; i++)
	printf("%d ",arreglo[i]);
return 0;
}
