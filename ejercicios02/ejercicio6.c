/*C(n, r) = n! / (r!(n - r)!)
Calcular el número de combinaciones de n
elementos tomando r a la vez
*/
#include <stdio.h>
#include <math.h>
int factorial(int x);
int main()
{
    int n, r, calculo;
    printf("Proporcione el valor n: ");
    scanf("%d", &n);
    printf("Proporcione el valor r: ");
    scanf("%d", &r);
    //
    calculo=(factorial(n))/(factorial(r)*factorial(n-r));
    printf("El numero de combinaciones es: %d\n", calculo);
    return 0;

}
int factorial(int x){
    int resultado;
    
        resultado=1;
        for (size_t i = 1; i <= x; i++)
        {
            resultado=resultado*i;
        }
        
    return resultado;
}