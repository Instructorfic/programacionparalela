#include <stdio.h>
#include <stdlib.h>

void suma_escalar(float **arr, int rows, int columns, float adding) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            arr[i][j] += adding;
        }
    }
}

void print_arr(float **arr, int rows, int columns) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
}

float **create_arr(int rows, int cols) {
    float **arr = malloc(rows*sizeof(float *));
    arr[0] = malloc(cols*sizeof(int));
    arr[1] = malloc(cols*sizeof(int));
    return arr;
}

void free_arr(float **arr, int rows) {
    for (int i=0; i<rows; i++)
        free(arr[i]);
    free(arr);
}

int main() {
    float **arr = create_arr(2, 2);
    for (int i=0; i<2; i++)
        for (int j=0; j<2; j++)
            arr[i][j] = i+2*j+1;
    print_arr(arr, 2, 2);
    suma_escalar(arr, 2, 2, 0.5);
    print_arr(arr, 2, 2);
    free_arr(arr, 2);
}