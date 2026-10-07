#include <stdio.h>

int main() {
    int a, b, num, i;
    int ehPrimo, quantidade = 0;
    long int soma = 0;

    do {
        printf("Digite A: ");
        scanf("%d", &a);
        printf("Digite B: ");
        scanf("%d", &b);
        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores invalidos! A e B devem ser positivos e A < B.\n\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]: ", a, b);

    for (num = a; num <= b; num++) {            
        if (num < 2) {
            continue;                           
        }

        ehPrimo = 1;                            
        for (i = 2; i * i <= num; i++) {        
            if (num % i == 0) {
                ehPrimo = 0;                    
                break;
            }
        }

        if (ehPrimo) {
            printf("%d ", num);
            soma += num;
            quantidade++;
        }
    }

    if (quantidade == 0) {
        printf("nenhum primo encontrado.");
    }

    printf("\nQuantidade de primos: %d\n", quantidade);
    printf("Soma dos primos: %ld\n", soma);

    return 0;
}