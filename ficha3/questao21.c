#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));                  
    secreta = rand() % 26 + 'a';        

    printf("=== Jogo de Adivinhacao de Letras ===\n");
    printf("Sorteei uma letra minuscula de 'a' a 'z'. Tente adivinhar!\n\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);         
        if (palpite < 'a' || palpite > 'z') {
            printf("Digite apenas uma letra minuscula de 'a' a 'z'.\n\n");
            continue;                  
        }

        tentativas++;

        if (palpite < secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c'!\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);

    return 0;
}