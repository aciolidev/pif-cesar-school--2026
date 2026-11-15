#include <stdio.h>

int ehPrimo(int n);

int main(void) {
    int n, i;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    if (ehPrimo(n))
        printf("%d e primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    printf("\nPrimos de 1 ate 50:\n");
    for (i = 1; i <= 50; i++)
        if (ehPrimo(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}

int ehPrimo(int n) {
    int d;
    if (n < 2)
        return 0;
    for (d = 2; d * d <= n; d++)   
        if (n % d == 0)
            return 0;
    return 1;
}