#include <stdio.h>

int main() {
    int n, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser um inteiro positivo.\n");
        return 1;
    }

    for (linha = 1; linha <= n; linha++) {              
        for (coluna = 1; coluna <= linha; coluna++) {   
            printf("%d", numero);
            if (coluna < linha) {
                printf(" ");                            
            }
            numero++;
        }
        printf("\n");
    }

    return 0;
}