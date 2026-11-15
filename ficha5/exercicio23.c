#include <stdio.h>

#define DOBRO(x) x*2               
#define DOBRO_CORRIGIDA(x) ((x)*2) 

int dobro(int x);

int main(void) {
    printf("Macro DOBRO(2+3)      = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3)     = %d\n", dobro(2+3));

    printf("Macro corrigida (2+3) = %d\n", DOBRO_CORRIGIDA(2+3));
    
    return 0;
}

int dobro(int x) {
    return x * 2;
}