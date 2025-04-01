///Apuntadores
#include<stdio.h>
int const TAMANO = 20;
//Desarrollar menu

int suma(int a, int b) {
return a+b;
}
int resta(int a, int b) {
return a-b;
}
int multiplicacion(int a, int b){
return a*b;
}
int division(int a, int b) {
return a/b;
}
int (*ptrFuncion) (int,int);
int main() {
int Contador = 0;
int Opcion;
int Resultado;
int *Apuntador;
Apuntador = &Opcion;
int Completado = 0;
int Historial[TAMANO];
int a, b;
while (Completado == 0) {


printf("\n seleccionar opcion");

printf("\nPresiona 1 si quieres hacer suma");

printf("\nPresione 2 si quieres hacer resta.");

printf("\nPresione 3 si quieres hacer una multiplicacion.");

printf("\n Presione 4 si quieres hacer una division.");

printf("\n presione 5 si quieres salir");
scanf("%d", &Opcion);
if(Opcion < 6 && Opcion > 0) {
	if (Opcion < 5) {
		printf("Ahora pon los numeros que deseas usar para la operacion.");
		scanf("%d",&a);
		scanf("%d",&b);
		if(Opcion == 1) 
		ptrFuncion= suma;
		if(Opcion == 2)
		ptrFuncion= resta;
		if(Opcion == 3)
		ptrFuncion = multiplicacion;
		if(Opcion == 4)
		ptrFuncion = division;
	
	Resultado = ptrFuncion(a,b);
	printf("%d",Resultado);	
}
	else {
		printf("Cerrando programa.");
		Completado = 1;
}


}

else {
printf("La opcion que escogiste no es correcta.");
}

}

return 0;
}

