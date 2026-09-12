1- 
a) 2
b)Por que a variável foi declarada com o tipo int (que só consegue armazenar números inteiros) e o número que foi definido foi um número decimal. Dessa forma o compilador faz uma conversão automática do número decimal (double) para int. O nome desse comportamento é "Truncamento de tipo"
c)Usar funções da biblioteca mat<math.h> como round() que arredonda para o número inteiro mais próximo ou simplesmente alterar o tipo da variável para double ou float.

2-
a)A biblioteca <conio.h> não faz parte do padrão ANSI C / ISO C. Por conta disso, o código que utiliza <conio.h> não é portável e falhará ao compilar em sistemas operacionais como Linux e MacOs ou em compiladores modernos sem suporte a biblioteca legada.
b)
Entrada de caractere:
- getchar(): Lê um único caractere da entrada padrão (stdin). Equivale a fgetc(stdin).
- fgetc(stream): Lê um caractere de um fluxo especificado (como stdin ou um arquivo).
Saida de caractere:
- putchar(c): Escreve um caractere na saída padrão (stdout). Equivale a fputc(c, stdout).
- fputc(c, stream): Escreve um caractere no fluxo especificado.

5-
a)1
b)0
c)0
d)0
e)1
f)0
g)1
h)1
i)0
j)0

6-
a)
Operador prefixado(++n): O valor da variável é incrementado antes de ser utilizado na expressão. Assim, n passa a ser 6 e depois esse valor 6 é atribuído a x.

Operador pós-fixado(m++): O valor atual da variável é utilizado primeiro na expressão e só depois a variável incrementada. Assim, o valor original de m(5) é atribuído a y, e em seguida m passa a ser 6.

TRECHO A: n = 6, x = 6
TRECHO B: m = 6, y = 5

b)
Na linguagem C, a ordem em que os argumentos de uma função (como o printf) são avaliados não é especificada pelo padrão ANSI C. O compilador tem a liberdade de avaliar os argumentos da esquerda para a direita ou da direita para a esquerda. Quando você modifica a variável n (n++) e tenta ler seu valor (n e n+1) dentro da mesma chamada de função, o resultado depende inteiramente da ordem de avaliação escolhida pelo compilador. Modificar uma variável e acessá-la na mesma instrução sem um ponto de sequência intermediário gera um Comportamento Indefinido (Undefined Behavior), podendo produzir saídas totalmente diferentes em compiladores distintos (como GCC, Clang ou MSVC) ou até em diferentes níveis de otimização do mesmo compilador.

