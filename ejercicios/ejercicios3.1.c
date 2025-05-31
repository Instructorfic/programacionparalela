#include<stdio.h>
#include<string.h>

void mi_funcion(char *cadena, int a) {
char cadena_volteada[a];

char c;
char *l;
l = cadena;

for(int i=0;i<0,i++); {
l=cadena+a-l;
cadena_volteada[i] = *l;
c = cadena_volteada[i];
printf("%c", c);

 }
}
int main() {
char mi_cadena[] = "cadeena de ejemplo.";

int a;
a=strlen(mi_cadena);
char *mi_apuntador = &mi_cadena[0];

mi_funcion(mi_apuntador,a);

return 0;


}
