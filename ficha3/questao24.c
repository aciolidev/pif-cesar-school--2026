#include <stdio.h>

int main() {
    int n, linha, coluna;

    do {
        printf("Digite uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);
        if (n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor invalido! N deve ser impar e estar entre 3 e 19.\n");
        }
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= n; coluna++) {
            if (coluna == linha || coluna == n - linha + 1) {
                printf("*");        
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}