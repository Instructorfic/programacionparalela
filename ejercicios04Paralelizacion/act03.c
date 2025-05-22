#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
int main() {
	/*
	menu
	*/
	int tamanio, num_buscar, ind;
	int aux=6;
while(aux!=0){
	printf("Menu 1.definir tamaño 2.agregar numeros 3.buscar numero 4.imprimir arreglo 5.cerrar\n");
	printf("Proporcione la opcion deceada: ");
	scanf("%d", &aux);
	if(aux==1){
	//declarar
	printf("Proporcione el tamaño del arrgelo: ");
	scanf("%d",&tamanio);
	int arreglo[tamanio];
}
	if(aux==2){
	//agregar
	printf("Proporcione los datos del arreglo: \n");
	for(int i=0; i<tamanio; i++){
	printf("arreglo[%d]: \n",i);
	scanf("%d",&arreglo[i]);
	}
}
	if(aux==3){
	printf("Proporcione el numero a buscar: ");
	scanf("%d",&num_buscar);

/*
	for(int i=0; i<tamanio; i++)
		arreglo[i]=rand () % 100;
*/
	//buscar
	ind=-1;
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
}
	if(aux==4)
	for(int i=0; i<tamanio; i++)
		printf("%d ",arreglo[i]);

	if(aux==5){
		printf("Salida exitosa");
		aux=0;
	}
}
return 0;
}
