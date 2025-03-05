#include<stdio.h>
int main(){
int lado;
int Base, Area, Volumen;
printf("Pon cuanto vale el lado de un hexaedro.");
scanf("%d", &lado);
Base=lado*lado;
Area=Base*6;
Volumen=Base*lado;
printf("La base lateral del hexaedro es %d \n", Base);  
printf("el area del hexaedro es %d \n", Area);  
printf("el volumen del hexaedro es %d ", Volumen);
return 0;
}
