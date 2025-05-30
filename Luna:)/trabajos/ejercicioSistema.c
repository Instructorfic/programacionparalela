#include <stdlib.h>
#include <string.h>

typedef struct {
    int matricula;
    char nombre[50];
} Estudiante;

Estudiante *estudiantes = NULL;
int cantidad_estudiantes = 0;

// Función para agregar un nuevo estudiante
void agregar_estudiante(int matricula, char *nombre) {
    // Redimensionar la memoria para el nuevo estudiante
    Estudiante *temp = realloc(estudiantes, (cantidad_estudiantes + 1) * sizeof(Estudiante));
    if (temp == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
    estudiantes = temp;

    // Agregar los datos del nuevo estudiante
    estudiantes[cantidad_estudiantes].matricula = matricula;
    strncpy(estudiantes[cantidad_estudiantes].nombre, nombre, sizeof(estudiantes[cantidad_estudiantes].nombre) - 1);
    estudiantes[cantidad_estudiantes].nombre[sizeof(estudiantes[cantidad_estudiantes].nombre) - 1] = '\0';

    cantidad_estudiantes++;
}

// Función para mostrar todos los estudiantes
void mostrar_estudiantes() {
    printf("\nLista de estudiantes:\n");
    for (int i = 0; i < cantidad_estudiantes; i++) {
        printf("Matricula: %d, Nombre: %s\n", estudiantes[i].matricula, estudiantes[i].nombre);
    }
}

// Función para liberar memoria
void liberar_memoria() {
    free(estudiantes);
    estudiantes = NULL;
    cantidad_estudiantes = 0;
}

int main() {
    int opcion, matricula;
    char nombre[50];

    do {
        printf("\nMenú:\n1. Agregar estudiante\n2. Mostrar estudiantes\n3. Salir\nOpción: ");
        scanf("%d", &opcion);
        getchar();  // Limpiar buffer de entrada

        switch (opcion) {
            case 1:
                printf("Ingrese matrícula: ");
                scanf("%d", &matricula);
                getchar();  // Limpiar buffer de entrada
                printf("Ingrese nombre: ");
                fgets(nombre, sizeof(nombre), stdin);
                nombre[strcspn(nombre, "\n")] = '\0';  // Eliminar salto de línea
                agregar_estudiante(matricula, nombre);
                break;
            case 2:
                mostrar_estudiantes();
                break;
            case 3:
                liberar_memoria();
                printf("Memoria liberada. Saliendo...\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 3);

    return 0;
}
