#include <stdio.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(void) {
    int a, b;
    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);
    if (a <= 0 || b <= 0) {
        printf("Erro: os numeros devem ser positivos.\n");
        return 1;
    }
    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);
    return 0;
}

/* Algoritmo de Euclides */
int mdc(int a, int b) {
    if (b == 0)            /* caso base: mdc(a, 0) = a */
        return a;
    return mdc(b, a % b);  /* passo recursivo: mdc(a, b) = mdc(b, a % b) */
}

void simplifica(int num, int den) {
    int d = mdc(num, den);
    printf("Fracao %d/%d simplificada: %d/%d\n", num, den, num / d, den / d);
}