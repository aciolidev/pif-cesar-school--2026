#include <stdio.h>

int main() {
    int numero, original, digito;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Erro: o numero deve ser inteiro positivo.\n");
        return 1;
    }

    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    printf("Numero original: %d\n", original);
    printf("Numero invertido: %d\n", invertido);

    return 0;
}