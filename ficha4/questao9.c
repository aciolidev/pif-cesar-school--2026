#include <stdio.h>

int main() {
    float trabalho, semestral, exame, media;

    printf("Nota do Trabalho de Laboratorio: ");
    scanf("%f", &trabalho);
    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + semestral * 3 + exame * 5) / 10;

    printf("Media ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situacao: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Aprovado\n");
    }

    return 0;
}