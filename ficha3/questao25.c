#include <stdio.h>

int main() {
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o numero deve ser inteiro positivo.\n");
        return 1;
    }

    printf("Divisores de %d: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {           
            printf("%d ", i);
            divisores++;
        }
    }

    printf("\nQuantidade de divisores: %d\n", divisores);

    if (divisores == 2) {
        printf("Conclusao: %d E PRIMO.\n", n);
    } else {
        printf("Conclusao: %d NAO E PRIMO.\n", n);
    }

    return 0;
}