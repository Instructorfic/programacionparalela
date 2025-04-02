//Programa que lee una cadena de caracteres y regresa otra cadena que es inversa a la original
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * rev(char * str) {
    int len = strlen(str);
    char * reversed = (char *)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1]; 
    }
    reversed[len] = '\0'; 

    return reversed;
}

int main() {
    char str[] = "Hola";
    char * reversedStr = rev(str);
    printf("Cadena original: %s\n", str);
    printf("Cadena invertida: %s\n", reversedStr);
    free(reversedStr); 
    return 0;
}

