#include <stdio.h>

int main() {
    int opcao;

    printf("===== BEM-VINDO AO ATENDIMENTO AUTOMATICO =====\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce sera direcionado para a Consulta de Saldo.\n");
            break;
        case 2:
            printf("Voce sera direcionado para a Emissao de Extrato.\n");
            break;
        case 3:
            printf("Voce sera direcionado para a area de Transferencias.\n");
            break;
        case 4:
            printf("Aguarde, voce sera transferido para um de nossos atendentes.\n");
            break;
        default:
            printf("Erro: Opcao Invalida! Tente novamente.\n");
    }

    return 0;
}