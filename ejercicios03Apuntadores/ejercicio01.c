#include <stdio.h>
#include <string.h>

void reversa(const char *cadena, char *cadenaInvertida) {
    int len = strlen(cadena);
    for (int i = 0; i < len; i++) {
        cadenaInvertida[i] = cadena[len - 1 - i];
    }
    cadenaInvertida[len] = '\0';
}

int main() {
    char cadena[100];
    printf("Proporcione la cadena: ");
    scanf("%99s", cadena);

    char cadenaAlReves[100];
    reversa(cadena, cadenaAlReves);

    printf("Cadena al revés: %s\n", cadenaAlReves);
    return 0;
}
