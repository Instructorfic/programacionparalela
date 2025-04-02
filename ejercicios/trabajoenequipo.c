#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para representar un estudiante
typedef struct {
    int id;
    char nombre[50];
} Estudiante;

// Función para agregar un estudiante
Estudiante* agregarEstudiante(Estudiante *lista, int *tam) {
    lista = realloc(lista, (*tam + 1) * sizeof(Estudiante));
    if (!lista) {
        printf("Error de memoria.\n");
        exit(1);
    }

    printf("ID Estudiante: ");
    scanf("%d", &lista[*tam].id);
    printf("Nombre Estudiante: ");
    scanf(" "); // Limpia el buffer
    fgets(lista[*tam].nombre, 50, stdin);
    lista[*tam].nombre[strcspn(lista[*tam].nombre, "\n")] = 0; // Elimina el salto de línea
    (*tam)++;
    return lista;
}

// Función para mostrar estudiantes
void mostrarEstudiantes(Estudiante *lista, int tam) {
    for (int i = 0; i < tam; i++)
        printf("ID Estudiante: %d, Nombre Estudiante: %s\n", lista[i].id, lista[i].nombre);
}

int main() {
    Estudiante *lista = NULL;
    int tam = 0, opcion;
    
    while (1) {
        printf("\n1. Agregar Estudiante\n2. Mostrar Estudiante\n3. Salir\nOpcion: ");
        scanf("%d", &opcion);
        
        if (opcion == 3) break;
        if (opcion == 1) lista = agregarEstudiante(lista, &tam);
        if (opcion == 2) mostrarEstudiantes(lista, tam);
    }
    
    free(lista);
    return 0;
}

