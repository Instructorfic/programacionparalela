#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Regresa la cadena inversa
char *rev(char *cadena) {
    int n = strlen(cadena);
    char *rev_cadena = malloc(strlen(cadena)+1);
    for (int i=0, j=n-1; i<n, j>=0; i++, j--) {
        rev_cadena[i] = cadena[j];
    }
    rev_cadena[n] = '\0';
    return rev_cadena;
}


int main() {
    char cadena[200];
    printf("Escriba una cadena de texto (max 200 caracteres)\n");
    scanf("%s", cadena);
    printf("El reverso de la cadena \n'%s'\n es \n'%s'\n", cadena, rev(cadena));
}