/*Dados dos valores enteros (a, b) determinar el valor
de la división entera y el resto de la división entera
de los mismos (a, b), sin usar los operadores de
división entera ó el de residuo.*/
#include <stdio.h>
int main()
{
    //   a/b=x
    int a, b, h, x;
    printf("Proporcione el valor de a: ");
    scanf("%d", &a);
    printf("Proporcione el valor de a: ");
    scanf("%d", &b);

    //calcular cuantas veces cabe b en a falta  a=bx
    if (a>b)
    {
        x=1;
        while (a>b*x)
        {
            x++;
        }
        x--;
        //residuo
        h=a-b*x;
        printf("La division entere de %d y %d es %d y el residuo es %d\n", a, b, x, h);
        
    }
    else if (a==b)
    {
        printf("La division entere de %d y %d es 1 y el residuo es 0\n", a, b);
    }
    else //a<b
    {
        printf("La division entere de %d y %d es 0 y el residuo es %d\n", a, b, a);
    }
    
    return 0;
}