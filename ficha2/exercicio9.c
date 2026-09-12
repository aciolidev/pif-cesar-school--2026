#include <stdio.h>

int main() {
    int num1, num2;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    // Para evitar divisão por zero, verificar se num2 é diferente de 0 antes de dividir.
    divisao = (float) num1 / num2;

    printf("Divisao: %.2f\n", divisao);

    return 0;
}