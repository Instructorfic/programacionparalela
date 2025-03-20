#include <stdio.h>
void incrementa (int *var) {
(*var)++;

}

int main() {

int x = 1;

incrementa (&x); /* x pasa a valer 2 */
printf("\n%d\n",x);
}
