1.
a) O while testa a condição antes de executar o bloco. Se ela já for falsa na primeira vez, o bloco não roda nenhuma vez. O mínimo de execuções é zero. Já o do-while executa o bloco primeiro e testa a condição depois. O bloco sempre roda pelo menos uma vez. O mínimo de execuções é uma.
b)
for: quando o número de repetições é conhecido ou controlado por um contador. 
while: quando o número de repetições é desconhecido e depende de um evento.
do-while: quando o bloco precisa rodar pelo menos uma vez antes de se decidir se continua.
c)
É um erro de lógica, não de compilação, porque o código é válido. O ; vira uma instrução vazia e passa a ser o corpo do laço. Se condicao for verdadeira, o laço repete a instrução vazia sem parar. Como nada dentro dele altera a condição, ele nunca termina e o programa trava em um laço infinito. O bloco que deveria ser repetido nunca é alcançado.
2.
a) A variável soma foi declarada dentro do bloco do for (entre as chaves). Por isso ela só existe ali dentro. Quando o laço termina, soma deixa de existir, e o printf tenta usar um identificador que não é visível naquele ponto. O compilador acusa algo como 'soma' undeclared.
b) A linha int soma = 0; é executada a cada iteração. Assim, soma é recriada e zerada toda vez, e o acúmulo se perde. O valor impresso seria apenas i * i da iteração atual (1, 4, 9, 16...), nunca a soma acumulada.
c)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;               // declarada fora do laço, inicializada uma vez

    for (i = 1; i < 10; i++) {
        soma += i * i;          // acumula a cada iteração
    }

    printf("Soma final = %d\n", soma);   // imprime 285
    system("PAUSE");
    return 0;
}

**Escopo de bloco:** uma variável declarada dentro de { } pertence àquele bloco e aos blocos internos a ele. Fora dele, ela não existe para o compilador.
**Visibilidade:** é onde o nome da variável pode ser usado no código. Uma variável declarada no início de main é visível em toda a função, inclusive dentro do for. Uma declarada dentro do for não é visível fora dele.
**Tempo de vida:** é o período em que a variável ocupa memória durante a execução. Variáveis locais comuns (automáticas) são criadas ao entrar no bloco e destruídas ao sair. No código original, soma nascia e morria a cada iteração. Se fosse necessário manter a variável dentro do bloco preservando o valor, seria possível usar static int soma = 0;, que é inicializada uma única vez e vive durante todo o programa. Ainda assim, ela continuaria invisível fora do bloco.

3.
a)São impressos 36 18 9 4 2 1, separados por tabulação. O motivo é que a /= 2 faz divisão inteira: 36 → 18 → 9 → 4 (9/2 = 4, a parte decimal é descartada) → 2 → 1 → 0. Quando a chega a 0, o teste a > 0 falha e o laço termina sem imprimir o 0.
b)O for sem inicialização e sem incremento funciona como um while. A cada volta: getch() lê uma tecla sem ecoá-la na tela e guarda o caractere em ch.
Se o caractere for diferente de 'X', o laço continua. Quando o usuário digita X, o laço para, e o X não é impresso. ch + 1: como caracteres são números (códigos ASCII), somar 1 dá o próximo caractere da tabela. Por exemplo, digitar a imprime b, e digitar H imprime I. Na prática, é uma "cifra" simples. Parênteses obrigatórios: o operador != tem precedência maior que =. Sem os parênteses, a expressão seria interpretada como: ch = (getch() != 'X')
c) Basta colocar no corpo do laço uma condição de saída usando:
**break:** encerra o laço, e o programa continua após ele. É a forma mais comum.
c
  for (;;) {
      printf("Laço Infinito\n");
      if (tecla == 'q') break;
  }
**return:** sai do laço e da função inteira. Dentro de main, também encerra o programa normalmente.
exit(0) (de stdlib.h): encerra o programa de forma controlada, a partir de qualquer ponto.
**goto:** salta para um rótulo fora do laço. Funciona, mas é desaconselhado por prejudicar a legibilidade. O essencial é que algo dentro do laço mude e seja testado. Sem isso, o for(;;) nunca termina.

4.
a)O break encerra o laço imediatamente. O resto do corpo não é executado, a condição não é testada de novo e, no caso do for, o incremento também não roda. A execução continua na primeira instrução após o laço.
b)O continue pula o restante do corpo apenas na iteração atual e vai para a próxima iteração, sem sair do laço. No for, a expressão executada logo após o continue é o incremento (a terceira expressão). Depois dele vem o teste da condição, e o laço segue normalmente se ela for verdadeira.
c)O break interrompe apenas o laço mais interno que o contém. O laço externo continua normalmente e inicia sua próxima iteração, que executa o laço interno de novo desde o começo.

5.
a)São 5 iterações. A cada volta, i sobe 1 e j desce 1, então a distância entre eles diminui 2 por vez. Quando os dois chegam a 5, o teste i < j (5 < 5) é falso e o laço termina.
b)
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
c)
int i, j;
i = 0;             
j = 10;

while (i < j) {     
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;            
    j--;
}