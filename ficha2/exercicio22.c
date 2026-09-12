#include <stdio.h>

int main() {
    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);

    letraMinuscula = letraMaiuscula + 32;

    printf("Letra minuscula: %c\n", letraMinuscula);

    return 0;
}