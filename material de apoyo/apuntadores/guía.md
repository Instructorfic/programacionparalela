# Guía sobre Apuntadores en C

## Introducción

Los **apuntadores** son uno de los conceptos más fundamentales y potentes en C. Permiten un control preciso sobre la memoria, la manipulación de datos y la implementación de estructuras de datos complejas como listas enlazadas, pilas, colas, entre otros.

### ¿Qué es un Apuntador?
- Un **apuntador** es una variable que almacena la dirección de memoria de otra variable.
- Permite acceder y modificar el valor de la variable a la que apunta.

## 1. Declaración de Apuntadores

Para declarar un **apuntador**, se utiliza el símbolo `*` antes del nombre de la variable:

```c 
int *ptr;     // Apuntador a un entero
float *fptr;  // Apuntador a un float
char *cptr;   // Apuntador a un char 
```

Ejemplo de Declaración

```c 
int a = 10;
int *ptr = &a; // ptr ahora contiene la dirección de a
```
## 2. Inicialización y Asignación

- La dirección de una variable se obtiene mediante el operador `&`.
- Para asignar un valor a la ubicación de memoria apuntada, se utiliza el operador de indirección `*`.

### Ejemplo de Asignación

```c
int a = 5;
int *ptr = &a; // ptr apunta a la dirección de a
*ptr = 10;     // Cambia el valor de a a 10
``` 

## 3. Operaciones comunes con apuntadores

### 3.1 Acceso a valor

Para acceder al valor de la variable apuntada, se utiliza el operador *:

int value = *ptr; // value ahora es 10, el nuevo valor de a

### 3.2 Cambiar el valor

Se puede cambiar el valor de la variable a través del apuntador:

*ptr = 15; // a ahora vale 15

## 3.3 Apuntadores y arreglos

Los apuntadores son especialmente útiles con arreglos, ya que el nombre del arreglo se comporta como un apuntador a su primer elemento:

int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr; // ptr apunta al primer elemento de arr

Iteración a través del Arreglo

for (int i = 0; i < 5; i++) {
printf("%d ", *(ptr + i)); // Accede a los elementos del arreglo
}

### 3.4 Aritmética de apuntadores

La aritmética de apuntadores permite mover un apuntador a través de la memoria:

- ptr + 1 apunta al siguiente elemento de tipo int, es decir, a la dirección ptr + sizeof(int).

Ejemplo de Aritmética de Apuntadores

int arr[] = {10, 20, 30, 40};
int *ptr = arr;

printf("%d\n", *ptr);     // 10
printf("%d\n", *(ptr + 1)); // 20
printf("%d\n", *(ptr + 2)); // 30

## 4. Apuntadores a apuntadores

Los apuntadores a apuntadores permiten crear múltiples niveles de indireccionamiento:

int x = 10;
int *ptr = &x;   // Apuntador a x
int **ptr2 = &ptr; // Apuntador a ptr

printf("%d\n", **ptr2); // Imprime 10

## 5. Pasaje de apuntadores a funciones

Los apuntadores son muy útiles al pasar argumentos a funciones, especialmente cuando deseamos modificar el valor de los argumentos originales.

Ejemplo de Funcion de Modificación

void modificar(int *p) {
*p = 20; // Cambia el valor apuntado a 20
}

int main() {
int a = 10;
modificar(&a); // Pasa la dirección de a
printf("%d\n", a); // Imprime 20
return 0;
}

## 6. Reserva dinámica de memoria

C permite la reserva dinámica de memoria, lo que significa que podemos solicitar memoria durante la ejecución del programa utilizando funciones como malloc(), calloc(), realloc(), y free().

Ejemplo de Uso de malloc

#include <stdlib.h>

int main() {
int *arr = (int *)malloc(5 * sizeof(int)); // Reserva espacio para 5 enteros
if (arr == NULL) {
// Manejo de error
}

// Asignar valores
for (int i = 0; i < 5; i++) {
arr[i] = i + 1;
}

// Liberar memoria
free(arr);
return 0;
}

## 7. Estructuras de datos con apuntadores

Los apuntadores son esenciales para implementar estructuras de datos dinámicas:

### 7.1 Listas enlazadas

Las listas enlazadas están formadas por nodos que contienen datos y un apuntador al siguiente nodo.

Definición de Nodo

typedef struct nodo {
int info;
struct nodo *sig; // Apuntador al siguiente nodo
} TNodo;

Ejemplo de Inserción

void insertar_inicio(TNodo **cabeza, int valor) {
TNodo *nuevo = (TNodo *)malloc(sizeof(TNodo));
nuevo->info = valor;
nuevo->sig = *cabeza; // El nuevo nodo apunta al antiguo cabeza
*cabeza = nuevo; // El nuevo nodo es la nueva cabeza
}