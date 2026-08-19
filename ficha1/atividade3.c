#include <stdio.h> /*Incluindo a biblioteca padrão de entrada e saída para usar printf e scanf*/

/*Função principal do programa*/
int main() {
    /*Declarando uma variável para armazenar a idade*/
    int idade;
    
    /*Criando um input para coletar a idade do usuário*/
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    /*Printando a idade do usuário*/
    printf("Sua idade é %d!\n", idade);

    return 0;
    
    /*Fim do programa*/
}