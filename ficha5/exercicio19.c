#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Erro: n deve ser positivo.\n");
        return 1;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("\nContagem crescente:\n");
    contagemCrescente(n);
    return 0;
}

/* Versão 1: de n até 1, depois "Fogo!" */
void contagem(int n) {
    if (n == 0) {              /* caso base */
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);         /* imprime ANTES da chamada */
    contagem(n - 1);
}

/* Versão 2: de 1 até n
 * O que muda: aqui a chamada recursiva vem ANTES do printf.
 * Na versão 1, cada chamada imprime seu valor e depois desce (n, n-1, ..., 1),
 * então os números saem na ida da recursão.
 * Na versão 2, cada chamada primeiro desce até o caso base e só imprime
 * na volta (desempilhamento). Como a última chamada empilhada (n = 1)
 * é a primeira a retornar, os números saem em ordem crescente: 1, 2, ..., n.
 */
void contagemCrescente(int n) {
    if (n == 0)                /* caso base */
        return;
    contagemCrescente(n - 1);  /* chamada ANTES do printf */
    printf("%d\n", n);
}