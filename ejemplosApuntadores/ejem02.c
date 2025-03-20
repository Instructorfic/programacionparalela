int* ptr;

int vector [100];
int i;

/* el puntero */

/* el vector */

/* variable contadora */

ptr = &vector[0];
/* ptr apunta al inicio del vector */

ptr+=10;
/* ptr apunta a vector[10] */

for ( i=0; i<=10; i++ ) {

*ptr = 1;

ptr++;

/* asigna 1 a la posición de
memoria
apuntada por "ptr" */

/* ptr pasa al siguiente elemento */

}


