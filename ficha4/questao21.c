#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Codigo do cargo:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Escolha: ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;
        case 3:
            percentual = 0.08;
            break;
        default:
            printf("Erro: Codigo de cargo invalido!\n");
            return 1;
    }

    aumento = salario * percentual;
    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}