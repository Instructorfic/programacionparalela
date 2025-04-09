#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Parte 1: Definir las variables con struct
struct Estudiante {
    char id[20];
    char nombre[100];
};

// Parte 2: Definir las funciones para agregar un estudiante al catálogo
void agregarEstudiante(struct Estudiante **catalogo, int *cantidad) {
    // part3 Usar el apuntador para el catálogo con la estructura
    *cantidad += 1;
    *catalogo = realloc(*catalogo, *cantidad * sizeof(struct Estudiante));

    //part4  Pedir información al usuario
    printf("Introduce el ID del estudiante: ");
    scanf("%s", (*catalogo)[*cantidad - 1].id);

    printf("Introduce el nombre del estudiante: ");
    scanf("%s", (*catalogo)[*cantidad - 1].nombre);

    printf("Estudiante agregado al catálogo.\n");
}

//parte5 con void Función para mostrar los estudiantes
void mostrarEstudiantes(struct Estudiante *catalogo, int cantidad) {
    if (cantidad == 0) {
        printf("No hay estudiantes en el catálogo.\n");
        return;
    }

    printf("-----CATÁLOGO DE ESTUDIANTES-----\n");
    for (int i = 0; i < cantidad; i++) {
        printf("ID: %s, Nombre: %s\n", catalogo[i].id, catalogo[i].nombre);
    }
}

//part6  Función para liberar memoria
void liberarMemoria(struct Estudiante *catalogo) {
    free(catalogo);
    catalogo = NULL;
}

//part7 hacer el otro main con la definicion de las otras variables y la  Función principal
int main() {
    struct Estudiante *catalogo = NULL;
    int cantidadEstudiantes = 0;
    int opcion;

//part8 hacer el menu para el programa
    do {
        printf("\n1: Agregar estudiantes\n");
        printf("2: Mostrar estudiantes\n");
        printf("3: Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            agregarEstudiante(&catalogo, &cantidadEstudiantes);
        } else if (opcion == 2) {
            mostrarEstudiantes(catalogo, cantidadEstudiantes);
        } else if (opcion == 3) {
            printf("Datos guardados, saliendo...\n");
            liberarMemoria(catalogo);
        } else {
            printf("Opción inválida.\n");
        }
    } while (opcion != 3);

    return 0;
}
