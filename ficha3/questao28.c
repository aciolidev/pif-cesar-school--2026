#include <stdio.h>

int main() {
    int opcao = 0;
    float salario, novoSalario, imposto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {          
            while (getchar() != '\n');           
            opcao = 0;
        }

        switch (opcao) {
            case 1:
                printf("Digite o salario atual (R$): ");
                scanf("%f", &salario);
                if (salario <= 0) {
                    printf("Salario invalido!\n");
                    break;
                }
                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                    printf("Reajuste aplicado: 15%%\n");
                } else {
                    novoSalario = salario * 1.10;
                    printf("Reajuste aplicado: 10%%\n");
                }
                printf("Salario atual: R$ %.2f\n", salario);
                printf("Novo salario:  R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario (R$): ");
                scanf("%f", &salario);
                if (salario <= 0) {
                    printf("Salario invalido!\n");
                    break;
                }
                if (salario <= 3000.00) {
                    imposto = salario * 0.08;
                    printf("Aliquota aplicada: 8%%\n");
                } else {
                    imposto = salario * 0.15;
                    printf("Aliquota aplicada: 15%%\n");
                }
                printf("Salario bruto:   R$ %.2f\n", salario);
                printf("Imposto retido:  R$ %.2f\n", imposto);
                printf("Salario liquido: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}