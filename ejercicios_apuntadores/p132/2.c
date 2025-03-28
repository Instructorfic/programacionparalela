#include <stdio.h>

void usr_strncpy(const char *src, char *dest, int n) {
    for (int i=0; i<n; i++) {
        if (src[i] == '\0') {
            dest[i] = '\0';
            return;
        }
        dest[i] = src[i];
    }
}

int main () {
    char src[200], dest[200];
    int n;
    printf("Escriba dos palabras separadas por espacio en blanco:\n");
    scanf("%s %s", src, dest);
    printf("Escoja cuántos caracteres se copiarán de la primer cadena a la segunda:\n");
    scanf("%d", &n);
    usr_strncpy(src, dest, n);
    printf("Primer cadena: %s\nSegunda cadena: %s\n", src, dest);
}