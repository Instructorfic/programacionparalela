#include <stdio.h>
#include <string.h>

void rev(char *str, char *reversed) {
    int len = strlen(str);
    char *ptr1 = str + len - 1;
    char *ptr2 = reversed;
    
    while (ptr1 >= str) {
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
    }
    *ptr2 = '\0'; // Finalizar la cadena
}

int main() {
    char str[100], inverted[100];
    printf("Ingrese una cadena: ");
    scanf("%99s", str); // Leer la cadena de entrada con límite de tamaño
    
    rev(str, inverted);
    printf("Cadena invertida: %s\n", inverted);
    
    return 0;
}
