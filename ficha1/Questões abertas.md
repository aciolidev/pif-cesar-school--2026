**Questão 4:**

```C
#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)
```
Resposta:

; ---> Não pode ser colocado após o #include

int Main{} ---> A função principal é "int main()"

() ---> Foram usados para delimitar o corpo da função, no C se usa {}

printf ---> No printf, a mensagem não está dentro de aspas.

cout << endl; ---> cout e endl pertencem a C++

system("PAUSE"); ---> Não é uma instrução padrão de C

**Questão 5**

```C
main()
{
printf("Linguagem C");
system("pause");
}
```
Resposta:

- Falta #include <stdio.h>, que é necessário para declarar a função printf()
- Falta #include <stdlib.h>, system é declarada nela
- system("pause") não é padrão ANSI C
- No final da função main() precisa ter o return 0


**Questão 6**

```C
main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}
```
Resposta:

- No final do main tem que ter return 0
- A declaração das variáveis está errada, pois não foi especificado o tipo de variável de "b" e "c" (int)
- Na mensagem do printf não fechou as aspas

**Questão 7**

Resposta:

a) printf("\n\tBom dia! Shirley.");
---> Deu espaço no inicio da frase 
b) printf("Você já tomou café? \n");
---> Tem uma quebra de linha no final
c) printf("\n\nA solução não existe!\nNão insista.");
---> Pula duas linhas no começo e tem uma quebra de linha após a primeira  frase
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
---> Criou espaços com /t e quebrou uma linha depois de "saída"
e) printf("%s\n%s\n%s\n", "um", "dois", "três");
---> Puxou a string com "%s" e quebrou a linha 3 vezes

**Questão 8**

```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("\n\t\"Primeiro programa\"");
system("PAUSE");
return 0;
}
```
Resposta:

#include <stdio.h> ---> biblioteca necessária para rodar a função printf
#include <stdio.h> ---> biblioteca necessária para rodar system("PAUSE")

"/n" ---> Quebra a linha

"/t" ---> Tabulação horizontal (avança para a próxima posição de tabulação)

"/" ---> Imprime uma aspas duplas sem encerrar a string.

printf("\n\t\"Primeiro programa\""); ---> Printa "Primeiro programa"

"/" ---> Essa barra no final imprime a aspas duplas que encerra a string

system("PAUSE"); ---> No windows, executa o comando pause, que o console exibe: "Pressione qualquer tecla para continuar. . ." e o programa fica aguardando o usuário pressionar uma tecla.

return 0 ---> Encerra o programa

**Questão 9**

```C
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}
```
Resposta:
"Primeiro programa|Pressione qualquer tecla para continuar. . . 

--- > printf("%c%c%cPrimeiro programa", '\n', '\t', '\"'); 

O primeiro "%c" vai receber '/"' (aspas duplas)
O segundo "%c" vai receber '/t' (tabulação)
O terceiro"%c" vai receber '/n' (quebra de linha)

---> printf("%c", "\"");
Aqui tem um problema, %c espera receber um char, mas "\"" é uma string. O correto seria '\"', ai sim seria um char, e iria fechar aspas.

---> system("PAUSE");
Printa a mensagem: "Pressione qualquer tecla para continuar. . ."

---> return 0;
Encerra o programa

**Questão 10**
Resposta:
LETRA B: Verdadeiro, a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas. A lingagem C é case sensitive, ou seja, diferencia letras maiúsculas e minúsculas. Logo, 'peso', 'Peso' e 'PESO' não representam a mesma variável na memória.

**Questão 11**
Resposta: 

Constante Classificação (Tipo de Constante) Tipo Base em C
\r [ Sequência de escape] [ char ]
2130 [ Constante inteira decimal ] [ int ]
-123 [ Constante de inteira decimal ] [ int ]
33.28 [ Constante de ponto flutuante ] [ double ]
0XFA [ Constante de inteira hexadecimal ] [ int ]
0101 [ Constante de inteira octal ] [ int ]
2.0e30 [ Constante de ponto flutuante ] [ double ]
\xDC [ Sequência de escape hexadecimal ] [ int ]
'\"' [ Constante de caractere ] [ char ]
'\\' [ Constante de caractere ] [ char ]
'F' [ Constante de caractere ] [ char ]
0 [ Constante inteira decimal ] [ int ]
'\0' [ Constante de caractere/sequência de escape ] [ char ]
"F" [ Constante string ] [char[]]
-4567.89 [ Constante de ponto flutuante ] [ double ]

**Questão 12**
Resposta: 

a) int a; [ Correto ] [ Declara a variável 'a' como do tipo inteiro ]
b) float b; [ Correto ] [ Declara a variável 'b' como número de ponto flutuante ]
c) double float c; [ Incorreto ] [ Está declarando a variável 'c' com dois tipos diferentes ao mesmo tempo ]
d) unsigned char d; [ Correto ] [ Declara a variável 'd' como um char sem sinal, permitindo apenas valores não negativos ]
e) unsigned e; [ Correto ] [ unsigned sozinho é equivalente unsigned int, logo a declaração da variável está correta ]
f) long float f; [ Incorreto ] [ Para usar um tipo de ponto flutuante com 'long', deveria ser 'long double' ]
g) long g; [ Correto ] [ long sozinho equivale a long int, então está correto]
h) long double h; [ Correto ] [ long double é um tipo de ponto flutuante de maior precisão que float, então está correto ]

**Questão 13**

Resposta: c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

**Questão 14**

Resposta: a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

**Questão 15**

Resposta: c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

**Questão 16**

Resposta: c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

**Questão 17**

Resposta: 
a), b) e c) estão corretas.
d) está incorreta.

Em C, o espaçamento entre o nome da função, os parênteses e os argumentos pode variar sem alterar o significado do código. Por isso, as formas a, b e c funcionam normalmente. Já na letra d, está faltando o uso de parênteses, necessário para o funcionamento da função printf.
