#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Desarrolle una función llamada menú que reciba una lista de opciones para
// mostrar un menú de opciones y espere la selección del usuario, retornando la
// posición de opción seleccionada, las opciones mostradas deben estar
// enumeradas iniciando con 1, y solo retornara la opción seleccionada si se
// encuentra en el rango valido.
int menu(char **opciones, int nopciones) {
    printf("Seleccione una de las siguientes opciones:\n");
    for (int i=0; i<nopciones; i++) {
        printf("%d. %s\n", i+1, opciones[i]);
    }
    printf("Su selección:\n");
    int seleccion;
    scanf("%d", &seleccion);
    if (1 <= seleccion && seleccion < nopciones)
        return seleccion;
    else
        return -1;
}

int main() {
    char *opciones[3] = { "Comida", "Desayuno", "Cena" };
    int seleccion = menu(opciones, 3);
    if (seleccion != -1) printf("Se seleccionó la opción %s\n", opciones[seleccion-1]);
    else printf("Se seleccionó una opción inválida (fuera del rango)\n");
}