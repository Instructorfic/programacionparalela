#include<stdio.h>
int main(){
int a, b, c;
printf("pon 3 numeros:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if (a > b) {
	if ( b > c) {
		printf("El numero medio fue el segundo");
	}
	else {
		printf("El numero medio fue el tercero");
	}

}
else {
	if (a > c) {
		printf("el numero medio fue el primero");
	}
	else {
		if(b > c) {
		printf("el numero medio fue el tercero.");
		}	
		else {
		printf("el numero medio fue el segundo.");
		}
	}
}
return 0;
}

