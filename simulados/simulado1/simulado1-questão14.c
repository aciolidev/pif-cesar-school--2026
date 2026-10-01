#include <stdio.h>

#define SENHA_SECRETA   2026
#define MAX_TENTATIVAS  3

int main() {
    int senha, tentativa;
    int acertou = 0;   

    for (tentativa = 1; tentativa <= MAX_TENTATIVAS; tentativa++) {
        printf("Tentativa %d de %d - Digite a senha: ", tentativa, MAX_TENTATIVAS);
        scanf("%d", &senha);

        if (senha == SENHA_SECRETA) {
            acertou = 1;
            break;   
        }

        if (tentativa < MAX_TENTATIVAS) {
            printf("Senha incorreta! Restam %d tentativa(s).\n\n",
                   MAX_TENTATIVAS - tentativa);
        }
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}