#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    if (x >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(x));
    } else {
        printf("Quadrado: %.2f\n", x * x);
    }

    return 0;
}