#include<stdio.h>

int* ptr;
int vector [100];
int i;


ptr = &vector[0];
ptr+=10;
for ( i=0; i<=10; i++ ) {
*ptr = 1;
ptr++;


}
