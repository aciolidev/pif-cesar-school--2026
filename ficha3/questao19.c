#include <stdio.h>

int main() {
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser um inteiro positivo.\n");
        return 1;
    }
    if (n > 92) {
        printf("Erro: o termo %d ultrapassa a capacidade do tipo long long int (limite: 92).\n", n);
        return 1;
    }

    printf("Termos da sequencia ate o %d-esimo:\n", n);

    for (i = 1; i <= n; i++) {
        if (i <= 2) {
            atual = 1;                      
        } else {
            proximo = anterior + atual;     
            anterior = atual;               
            atual = proximo;
        }
        printf("%lld ", atual);
    }

    printf("\n\nO %d-esimo termo da sequencia e: %lld\n", n, atual);

    return 0;
}