#include <stdio.h>
int main() {
    int h, m, s;

    printf("Ingrese la hora (hh mm ss): ");
    scanf("%d %d %d", &h, &m, &s);

    s++;
    if (s == 60) {
        s = 0;
        m++;
        if (m == 60) {
            m = 0;
            h = (h + 1) % 24;
        }
    }

    printf("Hora un segundo después: %02d:%02d:%02d\n", h, m, s);
    return 0;
}
