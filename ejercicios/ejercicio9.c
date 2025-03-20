//Jacobo Mandujan Sergio A.
//Calcular el número de combinaciones de n
//elementos tomando r a la vez
#include <stdio.h>
#include <stdio.h>

int main() {
    int n, r;
    long long factorial_n = 1, factorial_r = 1, factorial_nr = 1;
    long long combinaciones;

    printf("Introduce el valor de n: ");
    scanf("%d", &n);

    printf("Introduce el valor de r: ");
    scanf("%d", &r);

    if (r>n){
        printf("Error: r no puede ser mayor que n.\n");
        return 1;
    }

    for (int i=1;i<=n;i++){
        factorial_n *= i;
    }

    for (int i=1;i<=r;i++){
        factorial_r *= i;
    }

    for (int i=1;i<=(n-r);i++){
        factorial_nr *= i;
    }

    combinaciones=factorial_n / (factorial_r * factorial_nr);

    printf("El número de combinaciones de %d elementos tomando %d a la vez es: %lld\n", n, r, combinaciones);

    return 0;
}
