#include <stdio.h>

void rotacion(int *a, int *b, int *c){
    int aux;
    aux=*a;
    *a=*b;
    *b=*c;
    *c=aux;
}
int main()
{
    int a, b, c;
    printf("Proporcione el valor de 'a': ");
    scanf("%d",&a);

    printf("Proporcione el valor de 'b': ");
    scanf("%d",&b);

    printf("Proporcione el valor de 'c': ");
    scanf("%d",&c);
    rotacion(&a,&b,&c);

    printf("El valor de 'a' es: %d\n", a);

    printf("El valor de 'b' es: %d\n", b);

    printf("El valor de 'c' es: %d\n", c);
    return 0;
}

