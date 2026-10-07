#include <stdio.h>

#define SENHA_SECRETA 2026
#define MAX_TENTATIVAS 3

int main() {
    int senha, tentativas;
    int acertou = 0;

    for (tentativas = 1; tentativas <= MAX_TENTATIVAS; tentativas++) {
        printf("Tentativa %d de %d - Digite a senha: ", tentativas, MAX_TENTATIVAS);
        scanf("%d", &senha);

        if (senha == SENHA_SECRETA) {
            acertou = 1;
            break;              
        } else {
            printf("Senha incorreta!\n");
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
        printf("Tentativas utilizadas: %d\n", tentativas);
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}