#include <stdio.h>

int main() {
    float valor, soma = 0.0, media;
    int quantidade = 0;

    printf("Digite valores reais positivos (um valor negativo encerra):\n");

    printf("Valor: ");
    scanf("%f", &valor);

    while (valor >= 0) {          
        soma += valor;
        quantidade++;

        printf("Valor: ");
        scanf("%f", &valor);
    }

    printf("\nQuantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Media aritmetica: nao calculada (nenhum valor valido informado).\n");
    }

    return 0;
}