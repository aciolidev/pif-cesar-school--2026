1.
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores
totalmente distintos para o compilador.

2.
#include <stdio.h>
#include <stdlib.h>; *Esse ponto e virgula não deveria estar aqui*
int Main() *A função main() não pode ser escrita com M maiúsculo.*
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade); *Faltou definir a string com aspas*
cout << endl;
system("PAUSE");
return 0;
}

3.
int a = 2, b = 4, c = 5, d = 10;
a += b + c; // Valor final de a=11
b *= c = d - 2; // Valores finais de b=32 c=8
d %= a + 3; // Valor final de d=10
a += b += c += 5; // Valores finais de a=56 b=45 c=13

4.
a) i < j + 2 => Resultado: 1
b) 2 * i - 5 <= j - 4 => Resultado: 0
c) !k && (x + y >= 7.5) => Resultado: 1
d) !(i == j) || (y / x == 2.0) => Resultado: 1
e) i == 2 && j == 4 || k == 0 => Resultado: 1

5. 
a) A diferença está na hora em que a condição é testada. O while testa a condição antes de executar o bloco. Se a condição já for falsa na primeira verificação, o bloco nunca é executado, ou seja, o número mínimo de execuções é zero. O do-while executa o bloco primeiro e só depois testa a condição. Por isso, o bloco é executado pelo menos uma vez, mesmo que a condição seja falsa desde o início.

b) O for é mais elegante quando o número de iterações é conhecido ou quando o laço é controlado por um contador. Exemplos são percorrer um vetor, repetir algo N vezes ou contar de 1 a 10. Isso acontece porque o for reúne em uma única linha a inicialização, a condição e o incremento. Toda a lógica de controle fica visível no cabeçalho, o que reduz o risco de esquecer o incremento. O while é mais natural quando a repetição depende de um evento cujo número de ocorrências não se sabe de antemão, como ler dados até o usuário digitar 0.

c) É um erro de lógica, não de compilação. O código compila normalmente, embora alguns compiladores possam emitir um warning. O ponto-e-vírgula funciona como uma instrução vazia, e essa instrução vazia passa a ser o corpo do laço. O bloco {} que vem em seguida deixa de pertencer ao while.

6. 
a) O problema é o escopo de bloco. A variável soma foi declarada dentro das chaves { } do for. Em C, uma variável declarada dentro de um bloco só existe dentro daquele bloco e é destruída quando a execução sai dele. Também tem um problema lógico. Como int soma = 0; está dentro do laço, a variável seria recriada e zerada a cada iteração. A soma nunca acumularia os valores.

b) 
i	O que acontece	 soma +=i*i executa?
1	Execução normal	 Sim (1)  
2	Execução normal	 Sim (4)
3	Execução normal	 Sim (9)
4	Execução normal	 Sim (16)
5	continue: pula o resto do corpo e vai para i++  - Não executa
6	Execução normal	Sim (36)
7	Execução normal	Sim (49)
8	break: encerra o laço imediatamente	Não executa
9, 10	Nunca chegam a ser avaliados	Não executa

O continue interrompe apenas a iteração atual. O controle volta para o incremento (i++) e o laço segue normalmente, só que o quadrado de 5 é ignorado.O break interrompe o laço inteiro. A execução salta para a primeira instrução após o for, de modo que 8, 9 e 10 nunca são somados, apesar de a condição i <= 10 ainda ser verdadeira.