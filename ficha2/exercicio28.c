#include <stdio.h>

int main() {
    int horasNormais, horasExtras;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%d", &horasNormais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%d", &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);

    imposto = (salarioBruto > 12000.0) ? (salarioBruto - 12000.0) * 0.10 : 0.0;

    salarioLiquido = salarioBruto - imposto;

    printf("Salario bruto anual: R$ %.2f\n", salarioBruto);
    printf("Imposto devido: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salarioLiquido);

    return 0;
}