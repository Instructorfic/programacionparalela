#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura de estudiante
typedef struct Estudiante {
    int matricula;
    char nombre[50];
} Estudiante;

// Función para agregar un nuevo estudiante
Estudiante* agregarEstudiante(Estudiante* lista, int* tamano) {
    (*tamano)++;
    lista = (Estudiante*) realloc(lista, (*tamano) * sizeof(Estudiante));

    if (lista == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }

    printf("Ingrese matrícula: ");
    scanf("%d", &lista[(*tamano) - 1].matricula);
    printf("Ingrese nombre: ");
    scanf(" %[^\n]", lista[(*tamano) - 1].nombre);

    return lista;
}

// Función para mostrar todos los estudiantes
void mostrarEstudiantes(Estudiante* lista, int tamano) {
    if (tamano == 0) {
        printf("No hay estudiantes registrados.\n");
        return;
    }
    printf("\nLista de estudiantes:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Matrícula: %d, Nombre: %s\n", lista[i].matricula, lista[i].nombre);
    }
}

// Función para liberar la memoria utilizada
void liberarMemoria(Estudiante* lista) {
    free(lista);
    printf("Memoria liberada correctamente.\n");
}

int main() {
    Estudiante* lista = NULL;
    int tamano = 0;
    int opcion;

    do {
        printf("\nMenú:\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar estudiantes\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                lista = agregarEstudiante(lista, &tamano);
                break;
            case 2:
                mostrarEstudiantes(lista, tamano);
                break;
            case 3:
                liberarMemoria(lista);
                break;
            default:
                printf("Opción no válida, intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}
