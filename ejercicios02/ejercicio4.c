/*Desarrolle un programa que dados a y b enteros,
informar el producto de ambos por sumas
sucesivas.*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Proporcione a: ");
    scanf("%d", &a);
    
    printf("Proporcione b: ");
    scanf("%d", &b);
    
    printf("La suma sucesiva del producato de %d por %d seria: \n", a, b);
    for (size_t i = 0; i < b; i++)
    {
        printf("%d", a);
        if (i<b-1)
        {
            printf(" + ");
        }
    }
    printf(" =%d\n", a*b);
    
    return 0;
}
