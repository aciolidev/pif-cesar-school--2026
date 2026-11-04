1.
a) x = 0 é uma atribuição, não uma comparação. O valor 0 é guardado em x, e o valor original dela é perdido. A expressão inteira vale 0, que é falso. Por isso o bloco do if nunca é executado. Se houver else, ele é que roda. Já x == 0 apenas compara, sem alterar x.

b) Em C não existe um tipo booleano obrigatório na condição. Qualquer valor numérico é aceito. 
Falso: o valor é exatamente zero (0, 0.0, ponteiro nulo).
Verdadeiro: qualquer valor diferente de zero, inclusive negativos e reais como 0.5 ou -3.7.
Os operadores relacionais e lógicos (==, >, && etc.) retornam o inteiro 1 para verdadeiro e 0 para falso.

c) O bloco será executado. x = -5 atribui -5 a x, e a expressão vale -5. O padrão ANSI C diz que o comando do if é executado quando a expressão é diferente de 0. Como -5 ≠ 0, a condição é verdadeira, e isso acontece sempre, para qualquer valor anterior de x.

2.
a) Será impresso a opção B. A condição x > 10 (15 > 10) é verdadeira, então entra no if interno. Ali, y > 10 (5 > 10) é falsa. O else pertence a esse if interno, por isso a opção B é impressa. 

b) Pela regra do dangling else, o else se associa ao if mais próximo que ainda não tem else, dentro do mesmo bloco.

c)
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}

3.
a) A condição media >= 7.0 é avaliada primeiro. Se for verdadeira, a expressão resulta em A. Se for falsa, resulta em R. O resultado é então atribuído a situacao. Com media = 6.8, a condição é falsa, então situacao recebe R.

b)
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) Não. O ternário é uma expressão e precisa produzir um valor. Isso traz algumas limitações: Seus operandos só podem ser expressões; Não aceitam blocos { }, declarações de variáveis nem comandos como return, break, for ou while; Ele não serve para executar vários comandos em sequência; Até dá para usar o operador vírgula, mas o código fica ilegível; Os dois resultados precisam ter tipos compatíveis; Ternários aninhados ficam difíceis de ler e manter.

4.
a) Saída:
Prata
Ouro

O switch salta para o case 2 e imprime “Prata". Como não há break, a execução continua no case 3 e imprime “Ouro”. Só então encontra o break e sai do switch.

b) O break encerra o switch imediatamente e passa o controle para depois dele. Quando o break é omitido, ocorre o efeito cascata: a execução continua nos case seguintes, sem testar seus valores.

c) Só são aceitas expressões de tipo inteiro: int, char, short, long, long long, suas versões unsigned e enum. Os rótulos case precisam ser constantes inteiras.

5.
a)Saida: 
a = 0, b = 5, c = 8
a != 0 é falso. Como é um &&, o resultado já é falso e ++b não é executado, então b continua 5. O else é executado: c = 10 - 2 = 8.

b) Os operandos são avaliados da esquerda para a direita, e a avaliação para assim que o resultado é conhecido:

&& (E): se o operando da esquerda for falso, o da direita não é avaliado, porque o resultado já é falso.
|| (OU): se o operando da esquerda for verdadeiro, o da direita não é avaliado, porque o resultado já é verdadeiro.

c) a == 0 é verdadeiro. Como é um ||, a condição inteira já é verdadeira e ++b não é executado. Resultado: b = 5 e c = 20 (10 + 10).

6.
a) Saída para idade = 65:
Idoso
Adulto
Jovem

Os três if são independentes, então cada um é testado separadamente. 65 satisfaz >= 60, >= 18 e >= 12. O else só pertence ao último if.

b)if independentes: todas as condições são testadas, e várias podem ser verdadeiras e executar seus blocos. Cadeia else-if: as condições são testadas em ordem e, na primeira verdadeira, seu bloco é executado e o resto da cadeia é ignorado. No máximo um bloco é executado, e o código também fica mais eficiente.

c)
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}