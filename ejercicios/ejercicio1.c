//determinar divicion enntera y el resto de la divicion entera de los mismoa (a,b)
#include <stdio.h>

int main() {
    int a, b;
    int cociente = 0, residuo;

//1-pedir informacion al usuario
printf("Introduce el valor de a:");
 scanf("%d", &a);
printf("Introduce el valor de b: ");
 scanf("%d", &b);

//2-operaciones
if (b == 0) {
        printf("Error :( /n");
return 1;
}

residuo = a;

while (residuo >= b) {
        residuo -= b;
	cociente++;
}

//3-salida

 printf("Cociente: %d\n", cociente);
 printf("Residuo: %d\n", residuo);

  return 0;
}




























































