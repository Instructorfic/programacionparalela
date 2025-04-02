/*
	SISTEMA PARA LA GESTIÓN DE LOS DATOS DE ESTUDIANTES UTILIZANDO MEMORIA DINÁMICA

	DESCRIPCIÓN: EL PROGRAMA DEBE PERMITIR AL USUARIO AGREGAR ESTUDIANTES A UN CATÁLOGO, MOSTRAR LA LISTA DE ESTUDIANTES Y ELIMINAR LA MEMORIA UTILIZADA AL FINAL. CADA ESTUDIANTE TENDRÁ UN IDENTIFICADOR (MATRÍCULA) Y UN NOMBRE.

	REQUISITOS:
	1. UTILIZAR ESTRUCTURAS DINÁMICAS PARA GESTIONAR LA LISTA DE ESTUDIANTES.
	2. IMPLEMENTAR FUNCIONES PARA:
		2.1 AGREGAR UN NUEVO ESTUDIANTE.
		2.2 MOSTRAR TODOS LOS ESTUDIANTES.
		2.3 LIBERAR LA MEMORIA UTILIZADA
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGO_MATRICULA 8
#define ERROR_MATRICULA_INCORRECTA 1

typedef struct {
	char *nombre;
	char *matricula;
} Estudiante;

typedef struct {
    Estudiante **estudiantes;
    int size;
} BD;

int agregar_estudiante(BD *bd, const char *nombre, const char *matricula) {
    if (strlen(matricula != 8)) {
        printf("Matricula de tamaño incorrecto\n");
        return ERROR_MATRICULA_INCORRECTA;
    }
    bd->estudiantes = realloc(bd->estudiantes, ++(bd->size));
    Estudiante *estudiante_actual = bd->estudiantes[bd->size-1];
    estudiante_actual = malloc(sizeof(Estudiante));
    estudiante_actual->nombre = nombre;
    estudiante_actual->matricula = matricula;
    return EXIT_SUCCESS;
}

void imprimir_bd(BD *bd) {
    printf("Matrícula\t\t\tEstudiante\n");
    for (int i=0; i<bd->size; i++) {
        printf("%s\t\t\t%s\n", bd->estudiantes[i]->matricula, bd->estudiantes[i]->nombre);
    }
}

int free_bd(BD *bd) {
    for (int i=0; i<bd->size; i++) {
        free(bd->estudiantes[i]);
    }
    free(bd);
}

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
        return 0;
}

char *readline(void) {
    const int BUFFER = 20;
    char c = 1;
    char *s = malloc(BUFFER);
    unsigned long int n = 0;
    while ('\n' != (c = getchar())) {
        if (n%20 == 0) {
            s = realloc(s, n+20);
        }
        s[n] = c;
        n++;
    }
    s[n] = '\0';
}

#define MATRICULA_1 "XGD_1000"
#define NOMBRE_1 "Gustavo"
#define MATRICULA_2 "XGD_1001"
#define NOMBRE_2 "Carlos"
#define MATRICULA_3 "XGD_1002"
#define NOMBRE_3 "José"

int main() {
    // base de datos inicial
    BD *bd = malloc(sizeof(BD));
    agregar_estudiante(bd, NOMBRE_1, MATRICULA_1);
    agregar_estudiante(bd, NOMBRE_2, MATRICULA_2);
    agregar_estudiante(bd, NOMBRE_3, MATRICULA_3);
	const char *opciones[4] = { "Añadir estudiante", "Imprimir estudiantes en base de datos", "Liberar base de datos", "Salir" };
    int seleccion = 1;
    while (seleccion = menu(opciones, 4)) {
        switch (seleccion) {
            case 1:
                printf("Escriba un nombre de estudiante\n");

                break;
        }
    }
}