//Programacion paralela
//Sergio A. Jacobo Mandujan
//Evaluacion

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamano, i, j;
    char eleccion;

    printf("Ingresa el tamaño de la matriz: ");
    scanf("%d", &tamano);

    int matriz1[tamano][tamano], matriz2[tamano][tamano], resultado[tamano][tamano];

    printf("\n¿Quieres llenar las matrices manualmente? (s/n): ");
    scanf(" %c", &eleccion);

    if(eleccion == 's' || eleccion == 'S') {
        printf("\nValores para la Matriz 1:\n");
        for(i = 0; i < tamano; i++) {
            for(j = 0; j < tamano; j++) {
                printf("Posicion [%d][%d]: ", i+1, j+1);
                scanf("%d", &matriz1[i][j]);
            }
        }

        printf("\nValores para la Matriz 2:\n");
        for(i = 0; i < tamano; i++) {
            for(j = 0; j < tamano; j++) {
                printf("Posicion [%d][%d]: ", i+1, j+1);
                scanf("%d", &matriz2[i][j]);
            }
        }
    } else {
        // Llenado de las matrices con numeros random (valores entre 0 y 9)
        srand(time(0));
        for(i = 0; i < tamano; i++) {
            for(j = 0; j < tamano; j++) {
                matriz1[i][j] = rand() % 10;
                matriz2[i][j] = rand() % 10;
            }
        }
    }

    printf("\nMatriz [1]:\n");
    for(i = 0; i < tamano; i++) {
        for(j = 0; j < tamano; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz [2]:\n");
    for(i = 0; i < tamano; i++) {
        for(j = 0; j < tamano; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    clock_t inicio = clock();

    for(i = 0; i < tamano; i++) {
        for(j = 0; j < tamano; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    clock_t fin = clock();

    printf("\nMatriz Resultado:\n");
    for(i = 0; i < tamano; i++) {
        for(j = 0; j < tamano; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    printf("\nTiempo de ejecucion: %f segundos\n", (double)(fin - inicio)/CLOCKS_PER_SEC);

    return 0;
}
