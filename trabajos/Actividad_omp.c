#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  int TAMANO, valor_buscar, i = 0;
  printf("Ingrese el tamaño del arreglo: \n");
  scanf("%d", &TAMANO);

  int arreglo[TAMANO];
  bool valores_generados[100] = 0;

  printf("Ingrese el numero a buscar: \n");
  scanf("%d", &valor_buscar);

  #pragma omp parallel for
  for(i = 0; i < TAMANO; i++){
    int numero;
    do {
      numero = rand() % 100;
    } while(valores_generados[numero]);
    arreglo[i] = numero;
    valores_generados[numero] = 1;
  }

  for(i = 0; i < TAMANO; i++){
  printf(" %d", arreglo[i]);
  }
  printf("\n");

  for(i = 0; i < TAMANO; i++){
    if(arreglo[i] == valor_buscar){
      printf("Se encontro el numero: %d\n", valor_buscar);
      printf("En la posicion: %d\n", i);
      break;
    }
  }
return 0;
}


