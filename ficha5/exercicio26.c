#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int qtd, i;
    printf("Quantidade de termos: ");
    scanf("%d", &qtd);
    if (qtd <= 0) {
        printf("Informe uma quantidade positiva.\n");
        return 1;
    }
    for (i = 0; i < qtd; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");
    return 0;
}

long fibonacci(int n) {
    if (n == 0) return 0;   /* caso base */
    if (n == 1) return 1;   /* caso base */
    return fibonacci(n - 1) + fibonacci(n - 2); /* passo recursivo */
}

/* Por que fica lenta para n grande?
 * Cada chamada gera DUAS novas chamadas, formando uma árvore de recursão
 * que cresce de forma exponencial (aprox. 1,6^n chamadas).
 * Além disso, os mesmos termos são recalculados muitas vezes: para
 * fibonacci(5), fibonacci(3) é calculado 2 vezes, fibonacci(2) 3 vezes etc.
 * Por volta de n = 40 já são centenas de milhões de chamadas.
 * Uma versão iterativa (ou com memorização) calcula cada termo uma só vez,
 * em tempo linear.
 */