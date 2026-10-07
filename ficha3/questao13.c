#include <stdio.h>

int main() {
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (n > 20) {
        printf("Erro: %d! ultrapassa a capacidade do tipo long long int (limite: 20!).\n", n);
    } else {
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}