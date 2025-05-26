#include<stdio.h>
#include<omp.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	//VARIABLES
	int tamano;
	int numero=(rand() % 99)+1;
	int arr[tamano];


	//ENTRADA DE DATOS
	printf("Ingrese el tamaño que tendra el arreglo: ");
	scanf("%d",&tamano);

	if(tamano <= 0){
		printf("Valor invalido, el tamaño del arreglo tiene que ser mayor a 0.\n");
		return 1;
	}
	//PROCESOS Y SALIDAS
	#pragma omp parallel for shared(tamano, numero)
		for(int i=0;i<tamano;i++){
			arr[i]=arr[numero];
			printf("%d\n",arr[i]);
		}



return 0;
}
