#include <stdio.h>

/* Versão 1: laço for */
void contagemFor() {
    int i;
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

/* Versão 2: laço while */
void contagemWhile() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

/* Versão 3: laço do-while */
void contagemDoWhile() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    printf("Versao FOR:\n");
    contagemFor();

    printf("\nVersao WHILE:\n");
    contagemWhile();

    printf("\nVersao DO-WHILE:\n");
    contagemDoWhile();

    return 0;
}

/*
 * Qual estrutura é a mais adequada?
 *
 * O laço FOR é o mais adequado neste caso, porque o número de repetições
 * é conhecido de antemão (101 valores, de 0 a 100) e controlado por um
 * contador. O for reúne inicialização, condição e incremento em uma única
 * linha, o que deixa o código mais curto, legível e menos sujeito a erros
 * como esquecer o incremento e causar um laço infinito.
 *
 * O WHILE funciona, mas espalha o controle do laço por três lugares
 * diferentes. Ele é mais indicado quando o número de repetições é
 * desconhecido.
 *
 * O DO-WHILE também funciona, mas sua característica principal (executar
 * pelo menos uma vez antes de testar) não traz nenhuma vantagem aqui.
 * Ele é mais indicado para menus e validação de entrada.
 */