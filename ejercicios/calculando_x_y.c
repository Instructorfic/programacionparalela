int main() {
    int x, n, termino = 1, suma = 1;

    printf("ingresa el valor de x:");
    scanf("%d", &x);
    printf("ingresa el valor de n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        termino *= x;
        suma += termino;
    }
    printf("la suma es:%d\n", suma);
    return 0;
}
