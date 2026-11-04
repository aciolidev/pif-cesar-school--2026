#include <stdio.h>

int main() {
    int total, entregue, troco, resto;
    int n100, n50, n20, n10, n5 = 0, n2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (total <= 0 || entregue <= 0) {
        printf("Erro: Os valores devem ser inteiros positivos!\n");
        return 1;
    }

    if (entregue < total) {
        printf("Erro: Valor entregue insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    if (troco == 0) {
        printf("Nao ha troco a devolver.\n");
        return 0;
    }

    resto = troco;

    if (resto % 2 != 0 && resto >= 5) {
        n5 = 1;
        resto = resto - 5;
    }

    n100 = resto / 100;
    resto = resto % 100;
    n50 = resto / 50;
    resto = resto % 50;
    n20 = resto / 20;
    resto = resto % 20;
    n10 = resto / 10;
    resto = resto % 10;
    n2 = resto / 2;
    resto = resto % 2;

    if (n100 > 0) {
        printf("%d cedula(s) de R$ 100\n", n100);
    }
    if (n50 > 0) {
        printf("%d cedula(s) de R$ 50\n", n50);
    }
    if (n20 > 0) {
        printf("%d cedula(s) de R$ 20\n", n20);
    }
    if (n10 > 0) {
        printf("%d cedula(s) de R$ 10\n", n10);
    }
    if (n5 > 0) {
        printf("%d cedula(s) de R$ 5\n", n5);
    }
    if (n2 > 0) {
        printf("%d cedula(s) de R$ 2\n", n2);
    }
    if (resto > 0) {
        printf("Nao e possivel devolver R$ %d com as cedulas disponiveis.\n", resto);
    }

    return 0;
}