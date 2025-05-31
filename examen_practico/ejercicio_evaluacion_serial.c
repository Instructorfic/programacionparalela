/*Implementar el algoritmo para realizar la multiplicación de matrices cuadradas,
versión SERIAL de la multiplicación de matrices.*/
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
int main()
{
    //variables de tiempo
    clock_t inicio, fin;
    //tiempo de inicio
    inicio = clock();
    //indices
    int i, j, w;
    //definicion de variables y entrada del tamaño de la matrices
    int n, r;
    printf("Proporcione el tamaño de las matrices: ");
    scanf("%d",&n);
    int matriz1[n][n], matriz2[n][n], resultado[n][n];

    //proporcionar valores random a las dos matrices, los valores ceran del 0 al 99 (se puede cambiar)
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            matriz1[i][j]=rand() % 100;
            matriz2[i][j]=rand() % 100;
        }
        
    }
    //impresion de las dos matrices
    printf("Matriz 1:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",matriz1[i][j]);
            
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",matriz2[i][j]);
            
        }
        printf("\n");
    }
    //matriz resultante de la multiplicacion de las dos matrices 
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            r=0;
            for ( w = 0; w < n; w++)
            {
                r+=matriz1[i][w]*matriz2[w][j];
                // r es el resultado de la multiplicacion de la fila de la matriz1 por la columna de la matriz2
            }
            resultado[i][j]=r;
            
        }

    }
    //imprimir la matriz resultante
    printf("Matriz 1 x Matriz 2 =\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",resultado[i][j]);
            
        }
        printf("\n");
    }
    //tiempo final
    fin = clock();
    //calcular e imprimir el tiempo total de ejecucion del programa
    double seg = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("El tiempo total del programa es de: %.4f segundos. \n", seg);
    return 0;
}
