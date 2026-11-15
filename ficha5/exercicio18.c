#include <stdio.h>

long potencia(int base, int expoente);

int main(void) {
    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente nao pode ser negativo.\n");
        return 1;
    }
    printf("%d ^ %d = %ld\n", base, expoente, potencia(base, expoente));
    return 0;
}

long potencia(int base, int expoente) {
    
    if (expoente == 0)
        return 1;
    
    return base * potencia(base, expoente - 1);
}