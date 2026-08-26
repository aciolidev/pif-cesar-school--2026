#include <stdio.h>

int main() {
    int n1, n2, n3;
    double media;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &n2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &n3);

    media = (double)(n1 + n2 + n3) / 3.0;

    printf("A media aritmetica e: %.2lf\n", media);

    return 0;
}