#include <stdio.h>
#include <string.h>

void strncpy_right(const char *src, char *dest, size_t n) {
    for (int i=strlen(src)-n, j=0; i<strlen(src); i++, j++) {
        dest[j] = src[i];
    }
    dest[n > strlen(dest) ? n : strlen(dest)] = '\0';
}

int main () {
    char src[200], dest[200];
    int n;
    printf("Escriba dos palabras separadas por espacio en blanco:\n");
    scanf("%s %s", src, dest);
    printf("Escoja cuántos caracteres se copiarán de la primer cadena a la segunda, por la derecha:\n");
    scanf("%d", &n);
    strncpy_right(src, dest, n);
    printf("Primer cadena: %s\nSegunda cadena: %s\n", src, dest);
}