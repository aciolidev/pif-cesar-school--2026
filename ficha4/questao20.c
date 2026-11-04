#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x, x1, x2;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Erro: O coeficiente a deve ser diferente de zero!\n");
        return 1;
    }

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("Delta = %.2f\n", delta);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        x = -b / (2 * a);
        printf("Raiz unica: x = %.2f\n", x);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}