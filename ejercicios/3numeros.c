#include<stdio.h>

int main(){
int a, b, c;

printf("pon el valor de a \n");
scanf("%d",&a);
printf("pon el valor de b \n");
scanf("%d",&b);
printf("pon el valor de c \n");
scanf("%d",&c);


    if ((a > b && a < c) || (a < b && a > c)) {
        printf("El número medio es: %d\n", a);
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        printf("El número medio es: %d\n", b);
    }
    else {
        printf("El número medio es: %d\n", c);
    }

    return 0;
}








