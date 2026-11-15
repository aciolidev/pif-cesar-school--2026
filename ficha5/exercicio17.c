#include <stdio.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(void) {
    int n;
    long fi, fr;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Valor invalido: deve ser nao negativo.\n");
        return 1;
    }

    fi = fatorialIterativo(n);
    fr = fatorialRecursivo(n);
    printf("Iterativo: %d! = %ld\n", n, fi);
    printf("Recursivo: %d! = %ld\n", n, fr);
    printf(fi == fr ? "Os resultados coincidem.\n" : "Os resultados NAO coincidem.\n");
    return 0;
}

long fatorialIterativo(int n) {
    long resultado = 1;
    int i;
    for (i = 2; i <= n; i++)
        resultado *= i;
    return resultado;
}

long fatorialRecursivo(int n) {
    if (n <= 1)               
        return 1;
    return n * fatorialRecursivo(n - 1); 
}