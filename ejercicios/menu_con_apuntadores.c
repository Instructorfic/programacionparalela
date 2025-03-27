#include <stdio.h>

int menu(char *opciones[], int num_opciones) {
    int seleccion = 0;

    printf("menu de opciones:\n");
    for (int i = 0; i < num_opciones; i++) {
        printf("%d. %s\n", i + 1, opciones[i]);
    }

    do {
    printf("seleccione una opcion (1-%d):", num_opciones);
    scanf("%d", &seleccion);

    if (seleccion < 1 || seleccion > num_opciones) {
        printf("opcion invalida intente nuevamente\n");
        }
    } while (seleccion < 1 || seleccion > num_opciones);

    return seleccion;
}

int main() {

    char *opciones[] = {"opcion 1", "opcion 2", "opcion 3", "salir"};
    int num_opciones = sizeof(opciones) / sizeof(opciones[0]);

    int seleccion = menu(opciones, num_opciones);

    printf("usted selecciono la opcion %d: %s\n", seleccion, opciones[seleccion - 1]);

    return 0;
}
