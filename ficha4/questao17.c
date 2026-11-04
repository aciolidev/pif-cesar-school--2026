#include <stdio.h>

int main() {
    float total, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &total);

    printf("Opcao de pagamento:\n");
    printf("1 - A Vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = total * 0.90;
            comissao = valorFinal * 0.05;
            printf("Valor final a pagar: R$ %.2f\n", valorFinal);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;
        case 2:
            parcela = total / 3;
            comissao = total * 0.05;
            printf("Valor de cada parcela: 3x de R$ %.2f\n", parcela);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
    }

    return 0;
}