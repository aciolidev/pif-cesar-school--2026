#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0.0;
    int total = 0;

    printf("Digite as notas dos alunos (0.0 a 10.0). Digite -1 para encerrar.\n");

    while (1) {
        printf("Nota do aluno %d: ", total + 1);
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;                      
        }

        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0.0 e 10.0.\n");
            continue;                   
        }

        if (total == 0) {               
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }

        soma += nota;
        total++;
    }

    if (total > 0) {
        printf("\n--- Estatisticas da Turma ---\n");
        printf("a) Total de alunos avaliados: %d\n", total);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / total);
    } else {
        printf("\nNenhuma nota foi informada.\n");
    }

    return 0;
}