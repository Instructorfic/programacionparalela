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
    char saludo[20];
    printf("saludo: %s\n", saludo);
    usr_strncpy("hola", saludo, 3);
    printf("saludo: %s\n", saludo);
    usr_strncpy("hallo guten tag", saludo, 7);
    printf("saludo: %s\n", saludo);
}