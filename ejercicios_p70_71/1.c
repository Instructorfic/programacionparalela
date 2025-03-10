#include <stdio.h>
#include <assert.h>

int division_entera(int a, int b) {
    if (a == 0) return 0;
    if (b == 0) {
        printf("División por 0 no definida\n");
        return (unsigned int)-1;
    } 
    int residuo = a >= 0 ? a : -a;
    int b_times = b;
    for (int i=0; i<a; i++) {
        if (residuo > b_times*(i+1)) {
            residuo -= b_times*(i+1);
        } else {
            return i;
        }
    }
    return residuo;
}

int residuo(int a, int b) {
    return a - division_entera(a, b)*b;
}

int main() {
    int d9_4 = division_entera(9, 4);
    printf("Division entera 9/4 (mi función): %d\nDivisión entera C: %d\n", d9_4, 9/4);
    printf("Residuo 9%%4: %d\n", residuo(9, 4));
    printf("Division entera (-9)/4: %d\n", division_entera(-9, 4));
    printf("Residuo (-9)%%4: %d\n", residuo(-9, 4));
    
}