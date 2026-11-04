#include <stdio.h>
#include <math.h>

int main() {
    char op;
    float a, b;

    printf("===== CALCULADORA =====\n");
    printf("+ Soma\n");
    printf("- Subtracao\n");
    printf("* Multiplicacao\n");
    printf("/ Divisao\n");
    printf("^ Potenciacao\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        case '^':
            printf("Resultado: %.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
            break;
        default:
            printf("Erro: Operacao Invalida!\n");
    }

    return 0;
}