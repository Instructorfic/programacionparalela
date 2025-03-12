/*Dado un capital inicial, a un determinado porcentaje
de intereses anual determine en cuantos meses
este capital se duplicara, suponiendo que el capital
y los interese generados son reinvertido.
*/
#include <stdio.h>
int main()
{
    float inicial, interes, duplicado, interesMensual;
    int meses = 0;
    printf("Proporcione el capital inicial: ");
    scanf("%f", &inicial);
    printf("Proporcione el porsentaje de interes anual: ");
    scanf("%f", &interes);
    interes=interes/100;
    interesMensual=interes/12;
    duplicado=inicial*2;
    while (inicial < duplicado)
    {
        inicial=inicial+inicial*interesMensual;
        meses++;
    }
    printf("El capital se duplicara en %d meses\n", meses);
    return 0;
}
