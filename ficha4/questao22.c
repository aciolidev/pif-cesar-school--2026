#include <stdio.h>

int main() {
    float valor, aliquota, imposto, precoFinal;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Estado de destino:\n");
    printf("1 - MG\n");
    printf("2 - SP\n");
    printf("3 - RJ\n");
    printf("4 - MS\n");
    printf("Escolha: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            aliquota = 0.07;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.15;
            break;
        case 4:
            aliquota = 0.08;
            break;
        default:
            printf("Erro: Codigo de estado invalido!\n");
            return 1;
    }

    imposto = valor * aliquota;
    precoFinal = valor + imposto;

    printf("Imposto: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}