#include <stdio.h>

int main() {
    int opcao;
    float temp, resultado;

    printf("===== CONVERSOR DE TEMPERATURA =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = temp * 1.8 + 32;
            printf("%.2f C = %.2f F\n", temp, resultado);
            break;
        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temp);
            resultado = temp + 273.15;
            printf("%.2f C = %.2f K\n", temp, resultado);
            break;
        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temp);
            resultado = (temp - 32) / 1.8;
            printf("%.2f F = %.2f C\n", temp, resultado);
            break;
        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &temp);
            resultado = temp - 273.15;
            printf("%.2f K = %.2f C\n", temp, resultado);
            break;
        default:
            printf("Erro: Opcao Invalida!\n");
    }

    return 0;
}