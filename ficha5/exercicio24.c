/* Como testar as duas versões:
 *   1) Com a linha "#define DEBUG" ativa, o programa imprime a soma
 *      parcial a cada iteração do laço.
 *   2) Comentando a linha "#define DEBUG", o pré-processador remove o
 *      printf de depuração, e o programa mostra apenas o resultado final.
 *
 * Diferença de comportamento: o código dentro de #ifdef DEBUG ... #endif
 * só existe no executável quando DEBUG está definido. Sem DEBUG, ele nem
 * chega ao compilador, então não há custo nenhum em tempo de execução.
 *
 * Exemplo com n = 4:
 *   COM DEBUG:  [DEBUG] i = 1, soma parcial = 1
 *               [DEBUG] i = 2, soma parcial = 3
 *               [DEBUG] i = 3, soma parcial = 6
 *               [DEBUG] i = 4, soma parcial = 10
 *               Soma de 1 ate 4 = 10
 *   SEM DEBUG:  Soma de 1 ate 4 = 10
 */
#include <stdio.h>

#define DEBUG   /* comente esta linha para desativar a depuração */

int somaAteN(int n);

int main(void) {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));
    return 0;
}

int somaAteN(int n) {
    int i, soma = 0;
    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }
    return soma;
}