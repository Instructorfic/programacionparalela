#include <stdio.h>

int main()
{

int a,b,i,cociente=0,residuo;

    printf("valor entero de a\n");
    scanf("%d",&a);

    printf("valor entero de b\n");
    scanf("%d",&b);

residuo=a;

for(i=0;residuo>=b;i++) {
    residuo -= b;
    cociente++;
}

printf("cociente: %d\n",cociente);
printf("residuo: %d\n",residuo);

    return 0;
}
