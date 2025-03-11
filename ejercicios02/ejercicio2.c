/*Realizar un algoritmo que lea 3 números diferentes y
determine el número medio del conjunto de los 3
números.*/
#include <stdio.h>

int main()
{
    int a, b, c, medio;
    printf("Proporcione el primer numero: ");
    scanf("%d", &a);
    printf("Proporcione el segundo numero: ");
    scanf("%d", &b);
    printf("Proporcione el tercer numero: ");
    scanf("%d", &c);
    //
    if (a>b)
    {
        if (b>c) //a>b>C
        {
            printf("El numero del medio es %d\n", b);
        }
        else //a>c>b
        {
            printf("EL numero del medios es %d\n", c);
        }
        
    }
    else if (b>a)
    {
        if (a>c) //b>a>c
        {
            printf("El numero del medio es %d\n", a);
        }
        else //b>c>a
        {
            printf("EL numero del medios es %d\n", c);
        }
    }
    else if (c>a)
    {
        if (a>b) //c>a>b
        {
            printf("El numero del medio es %d\n", a);
        }
        else //c>b>a
        {
            printf("EL numero del medios es %d\n", b);
        }
    }
    
    return 0;
}
