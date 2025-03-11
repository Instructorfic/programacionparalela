//leer tres números diferentes y determinar
//el número medio del conjunto de los 3 números

#include <stdio.h>
#include <math.h>

int main() {
  float a,b,c;
  float media;

  printf("valor del primer número:\n");
  scanf("%f",&a);

  printf("valor del segundo número:\n");
  scanf("%f",&b);

  printf("valor del tercer número:\n");
  scanf("%f",&c);

media=(a+b+c) / 3;

printf("la media es: %.2f\n",media);

    return 0;
}
