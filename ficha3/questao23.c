#include <stdio.h>

int main() {
    int l, linha, coluna;

    do {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);
        if (l < 3 || l > 20) {
            printf("Valor invalido! O lado deve estar entre 3 e 20.\n");
        }
    } while (l < 3 || l > 20);

    for (linha = 1; linha <= l; linha++) {
        for (coluna = 1; coluna <= l; coluna++) {
            if (linha == 1 || linha == l || coluna == 1 || coluna == l) {
                printf("X");        
            } else {
                printf(" ");       
            }
        }
        printf("\n");
    }

    return 0;
}