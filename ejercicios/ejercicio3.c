#include <stdio.h>
#include <string.h>

void miFuncion(char *cadena, int a) {
char cadenaVolteada[a];

char c;
char *l;
l = cadena;

for(int i=0;i<a;i++) {
l=cadena+a-i;
cadenaVolteada[i] = *l;
c=cadenaVolteada[i];
printf("%c",c);
}
}
int main() {
char miCadena[] = "Cadena de ejemplo.";

int a;
a=strlen(miCadena);
char *miApuntador = &miCadena[0];

miFuncion(miApuntador,a);

return 0;

}
