#include <stdio.h>

int main() {
    int valor, restante;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Digite o valor do saque (R$): ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: o valor deve ser um inteiro positivo.\n");
        return 1;
    }
    if (valor == 1 || valor == 3) {
        printf("Erro: nao e possivel sacar R$ %d com as cedulas disponiveis.\n", valor);
        return 1;
    }

    restante = valor;

    if (restante % 2 != 0) {
        n5 = 1;
        restante = restante - 5;
    }

    while (restante >= 100) {
        n100 = n100 + 1;
        restante = restante - 100;
    }
    while (restante >= 50) {
        n50 = n50 + 1;
        restante = restante - 50;
    }
    while (restante >= 20) {
        n20 = n20 + 1;
        restante = restante - 20;
    }
    while (restante >= 10) {
        n10 = n10 + 1;
        restante = restante - 10;
    }
    while (restante >= 2) {
        n2 = n2 + 1;
        restante = restante - 2;
    }

    printf("\nSaque de R$ %d:\n", valor);
    if (n100 > 0) printf("%d cedula(s) de R$ 100\n", n100);
    if (n50 > 0)  printf("%d cedula(s) de R$ 50\n", n50);
    if (n20 > 0)  printf("%d cedula(s) de R$ 20\n", n20);
    if (n10 > 0)  printf("%d cedula(s) de R$ 10\n", n10);
    if (n5 > 0)   printf("%d cedula(s) de R$ 5\n", n5);
    if (n2 > 0)   printf("%d cedula(s) de R$ 2\n", n2);

    printf("Total de cedulas: %d\n", n100 + n50 + n20 + n10 + n5 + n2);

    return 0;
}