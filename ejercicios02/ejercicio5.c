/*Realizar un programa que lea 2 números x y n y
calcule la suma:

1 + x^1 + x^2 + x^3 + x^n
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, suma;
    printf("Proporcione x: ");
    scanf("%d",&x);
    printf("Proporcione n: ");
    scanf("%d",&n);
    suma=0;
    for (size_t i = 0; i <= n; i++)
    {
        suma+=pow(x,i);
    }
    printf("La suma es: %d\n", suma);
    return 0;
}
