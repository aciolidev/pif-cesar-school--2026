#include <stdio.h>

#define VALOR_DIA     45.00
#define GRATIFICACAO  0.05   
#define IMPOSTO       0.08   

int main() {
    int dias;
    double bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto        = dias * VALOR_DIA;
    gratificacao = bruto * GRATIFICACAO;
    imposto      = bruto * IMPOSTO;
    liquido      = bruto + gratificacao - imposto;

    printf("\n========== HOLERITE ==========\n");
    printf("Dias trabalhados:     %d\n", dias);
    printf("Valor da diaria:      R$ %8.2f\n", VALOR_DIA);
    printf("------------------------------\n");
    printf("Salario bruto:        R$ %8.2f\n", bruto);
    printf("(+) Gratificacao 5%%:  R$ %8.2f\n", gratificacao);
    printf("(-) Imposto 8%%:       R$ %8.2f\n", imposto);
    printf("------------------------------\n");
    printf("Salario liquido:      R$ %8.2f\n", liquido);
    printf("==============================\n");

    return 0;
}