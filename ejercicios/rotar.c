//Rota los valores almacenados en tres variables
//Raúl Fernando Cruz Moreno
#include <stdio.h>

void rotar(int*a,int*b,int*c);
int main(){
	int a=5,b=2,c=3;
	printf("Valores sin rotar\n");
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	rotar(&a,&b,&c);
	printf("Valores rotados\n");
	printf("a=%d, b=%d, c=%d\n",a,b,c);
	return 0;
}

void rotar(int*a,int*b,int*c){
	int temp;
	temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;

}


