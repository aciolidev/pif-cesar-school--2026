#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Informe uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: nota invalida! Digite um valor entre 0.0 e 10.0.\n\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");
    printf("Nota informada: %.1f\n", nota);

    return 0;
}