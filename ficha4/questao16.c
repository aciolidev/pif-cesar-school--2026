#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Erro: Quantidade de litros invalida!\n");
        return 1;
    }

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}