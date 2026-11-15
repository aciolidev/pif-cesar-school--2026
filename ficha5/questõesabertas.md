1.
a) O protótipo é a linha float celsius(float);, logo antes da main(). Ele só avisa ao compilador que existe uma função chamada celsius, que recebe um float e retorna um float. Ainda não diz o que ela faz.

A chamada é o c = celsius(f);, dentro da main(). É ali que a função é usada de fato: o valor de f (100.0) é copiado para o parâmetro fahr, a função executa, e o que ela retorna vai para a variável c.

A definição é o bloco que fica depois da main(), com o cabeçalho completo e o corpo da função. É onde está a conta propriamente dita, (fahr - 32.0) * 5.0 / 9.0, e o return que devolve o resultado para a main().

b) O compilador lê o código de cima para baixo. Quando ele chega na chamada celsius(f) dentro da main(), ainda não viu a definição, que está mais embaixo. O protótipo serve justamente para ele já saber, nesse ponto, o tipo de retorno e os tipos dos parâmetros. Assim ele consegue conferir se a chamada passa a quantidade certa de argumentos, se os tipos batem (e converter quando precisar, por exemplo um int virando float) e como tratar o valor que volta.

Sem o protótipo, e com a função definida depois da main(), o compilador não teria como verificar nada disso na hora da chamada. Nos compiladores mais antigos, ele simplesmente assumia que a função retornava int e não checava os parâmetros. Isso gerava conflito quando ele encontrava a definição real retornando float, e o valor podia sair errado. Nos compiladores atuais, a partir do C99, isso já dá aviso ou erro de “implicit declaration”, seguido de erro de tipos conflitantes.

c) A função celsius() é do tipo float, porque é um float que ela retorna.

O tipo da função é definido pelo retorno porque é esse valor que “fica no lugar” da chamada dentro da expressão. Em c = celsius(f), o compilador precisa saber que celsius(f) vale um float para fazer a atribuição e as conversões do jeito certo. Os parâmetros são só as entradas da função: variáveis locais que recebem os valores passados e só existem lá dentro. Uma função pode receber vários parâmetros, até de tipos diferentes, mas devolve um único valor. É o tipo desse valor que caracteriza a função.

2.
a) Uma função em C devolve um único valor pelo return.

Na função calcular(), a ideia do programador era devolver a soma e a média ao mesmo tempo, como se o return aceitasse dois valores separados por vírgula. Só que em C não funciona assim. Ali a vírgula é o operador vírgula: ele avalia as duas expressões, descarta a primeira e fica só com o resultado da última. Então return soma, media; na prática é o mesmo que return media;. A soma é calculada e simplesmente jogada fora. O código compila (no máximo o gcc avisa que o operando da esquerda não tem efeito), mas não faz o que o programador queria.

b) Em imprime_mensagem(), o return; serve para encerrar a função na hora e voltar para quem chamou. Se erro for negativo, ela imprime “Erro invalido” e sai, sem chegar no printf do “Codigo processado”. Funciona como uma saída antecipada. Como a função é void, o return vem sem valor nenhum.

Ele não é obrigatório no final de uma função void. Quando a execução chega na chave } que fecha a função, ela termina e volta para quem chamou automaticamente. O return; numa função void só faz sentido quando você quer sair antes do fim, como nesse caso do erro.

c) Reescrevendo:

c
float calcular(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3.0;   /* 3.0 para não cair na divisão inteira */
}

int soma(int a, int b, int c) {
    return a + b + c;
}

3.
a)
void exibe_mensagem(char* msg); recebe um parâmetro de entrada (msg, um ponteiro para char, ou seja, uma string) e não retorna nada, porque é void.
int obter_codigo(void); não recebe parâmetros (o void entre parênteses deixa isso explícito) e retorna um valor do tipo int.
void limpar_tela(void); não recebe parâmetros e não retorna nada. É um procedimento que só executa uma ação.

b) A diferença prática é que a função com retorno produz um valor que pode ser usado por quem chamou: dá para guardar numa variável, usar numa conta, num if ou passar para outra função. Já o procedimento (void) só executa uma ação (imprimir algo, limpar a tela, mostrar um menu) e não devolve nada para ser aproveitado depois.

Uma função com retorno é a escolha certa quando você precisa de um resultado. Por exemplo, calcular a média de um aluno: float m = media(n1, n2, n3); e depois usar esse m para decidir se ele foi aprovado.

Um procedimento é a escolha certa quando a função só precisa fazer alguma coisa, sem resultado para devolver. Por exemplo, exibir o menu de um programa: exibeMenu(); só imprime as opções na tela, e não tem nada para retornar.

c) Não é válida. A função limpar_tela() é do tipo void, ou seja, ela não retorna valor nenhum. Então não existe nada para ser atribuído a x. A expressão limpar_tela() não tem valor, e por isso não pode ficar do lado direito de uma atribuição. O compilador acusa erro, algo como “void value not ignored as it ought to be”. O jeito certo de usar é só chamar a função sozinha: limpar_tela();.

4.
a) O caso base é o n == 0. Quando n chega a zero, a função retorna 1 direto, sem chamar a si mesma de novo. É o ponto de parada da recursão (e vale porque 0! = 1).

O passo recursivo é o n * fatorial(n - 1). A função resolve o problema “maior” multiplicando n pelo fatorial de um número menor, e a cada chamada o n diminui 1 até chegar no caso base.

Se o caso base fosse removido, a função nunca pararia de se chamar: fatorial(4) chama fatorial(3), que chama fatorial(2), e assim por diante, passando por 0, -1, -2... indefinidamente. Nenhuma chamada terminaria, e o programa acabaria travando com estouro de pilha. Vale notar que, mesmo com o caso base, chamar fatorial com um número negativo dá no mesmo problema, porque o n nunca vai bater em zero.

b) Rastreamento de fatorial(4):

Empilhamento (as chamadas vão sendo abertas e ficam esperando):

fatorial(4) → 4 * fatorial(3)   (espera)
fatorial(3) → 3 * fatorial(2)   (espera)
fatorial(2) → 2 * fatorial(1)   (espera)
fatorial(1) → 1 * fatorial(0)   (espera)
fatorial(0) → caso base, retorna 1

Desempilhamento (cada chamada recebe o resultado da de baixo, termina a conta e retorna):

fatorial(0) retorna 1
fatorial(1) = 1 * 1 = 1   → retorna 1
fatorial(2) = 2 * 1 = 2   → retorna 2
fatorial(3) = 3 * 2 = 6   → retorna 6
fatorial(4) = 4 * 6 = 24  → retorna 24

Resultado final: fatorial(4) = 24.

c) Toda vez que uma função é chamada, o programa reserva um espaço na pilha de execução, chamado de registro de ativação (ou stack frame). Nesse espaço ficam o parâmetro n daquela chamada, as variáveis locais e o endereço de retorno, que indica para onde voltar quando a função terminar. Na recursão, cada chamada cria um frame novo, empilhado em cima do anterior. Por isso cada chamada tem o seu próprio n (4, 3, 2, 1, 0), e um não interfere no outro.

Quando o caso base é atingido, as chamadas começam a terminar na ordem inversa. A última que entrou é a primeira que sai, e cada frame é liberado assim que a sua função retorna.

O problema é que a pilha tem tamanho limitado (normalmente alguns megabytes). Sem caso base, as chamadas nunca terminam, e frames novos continuam sendo empilhados sem que nenhum seja liberado. Uma hora a memória reservada para a pilha acaba, e acontece o estouro de pilha (stack overflow). O sistema operacional encerra o programa, geralmente com segmentation fault.

5.
a) A saída é:

25
8

A diferença está nos parênteses. Uma macro não é uma função: o pré-processador só faz uma substituição de texto antes da compilação, trocando o x pelo que foi passado, exatamente como foi escrito.

No SQR, todo x está entre parênteses, e a expressão inteira também. Então SQR(2+3) vira ((2+3)*(2+3)), que dá 5 * 5 = 25, o resultado esperado.

No DOBRO, não tem parêntese nenhum. Então DOBRO(2+3) vira 2+3x2. Como a multiplicação tem precedência sobre a soma, a conta fica 2 + 6 = 8, e não os 10 que a gente esperaria. Para corrigir, bastaria escrever #define DOBRO(x) ((x)x2).

b) O #define não termina com ponto e vírgula porque ele não é um comando da linguagem C. É uma diretiva do pré-processador, que roda antes do compilador e só faz substituição de texto. Se você colocar ponto e vírgula, ele passa a fazer parte do texto substituído. Por exemplo, com #define PI 3.14;, a linha area = PI * r * r; vira area = 3.14; * r * r;, o que dá erro de compilação ou, em outros casos, um comportamento estranho.

Os nomes em maiúsculas são só uma convenção, o compilador não exige. Eles servem para deixar claro, batendo o olho no código, que aquilo é uma constante ou macro, e não uma variável ou função comum. Isso é importante justamente porque macros se comportam diferente (como no caso do DOBRO). Saber que é uma macro ajuda a lembrar desses cuidados.

c) O problema é o espaço entre PRN e (n). Para o pré-processador ver uma macro com argumentos, o parêntese tem que vir colado no nome. Com o espaço, ele entende que PRN é uma macro sem argumentos, cujo texto de substituição é (n) printf("%d", n). Aí uma chamada como PRN(5) vira:

c
(n) printf("%d", n)(5)

o que não faz sentido nenhum e dá erro de compilação. A forma correta é sem o espaço:

c
#define PRN(n) printf("%d", n)

Uma diferença entre macro com argumentos e função: a macro é substituída no texto antes da compilação, sem nenhuma verificação de tipo. Já a função é chamada de verdade em tempo de execução, e o compilador confere os tipos dos parâmetros. Por causa disso, na macro o argumento pode acabar sendo avaliado mais de uma vez. Por exemplo, SQR(i++) vira ((i++)*(i++)) e incrementa o i duas vezes, coisa que não aconteceria com uma função, que avalia o argumento uma vez só. Por outro lado, a macro evita o custo da chamada de função, o que pode deixar o código um pouco mais rápido.

6.
a) A diferença está em onde o pré-processador procura o arquivo. Com <stdio.h>, ele procura direto nos diretórios padrão do sistema, onde ficam as bibliotecas que vêm com o compilador. Com "areas.h", ele procura primeiro na mesma pasta do arquivo .c que está sendo compilado e, se não achar, procura nos diretórios do sistema.

Por isso usamos < > para as bibliotecas padrão da linguagem, como stdio.h, math.h e stdlib.h, e " " para os cabeçalhos que nós mesmos criamos no projeto, como o areas.h. Nos dois casos, o efeito é o mesmo: o conteúdo do arquivo é copiado para dentro do código antes da compilação.

b) O #undef SOMA apaga a definição da macro SOMA. Da linha do #undef para baixo, o pré-processador esquece que essa macro existe. Se o código usar SOMA(2, 3) depois disso, não vai haver substituição nenhuma, e o compilador vai tratar SOMA como uma função não declarada, o que dá erro. Isso é útil para limitar uma macro a só um trecho do código, ou para liberar o nome e redefini-lo depois com outro valor.

A forma #undef SOMA(x,y) está incorreta porque o #undef recebe só o nome da macro. Os parâmetros (x,y) não fazem parte do nome, só aparecem na hora de definir a macro com #define. Não é preciso (nem permitido) repetir a lista de parâmetros para desfazer a definição. O gcc, por exemplo, reclama de “tokens extras no fim da diretiva #undef”.

c) Se DEBUG não foi definido, a mensagem impressa é Modo normal.

Essa decisão é tomada no pré-processamento, antes mesmo de o compilador começar a trabalhar, e não durante a execução. O pré-processador verifica se DEBUG existe. Como não existe, ele descarta a linha do printf("Modo de depuracao\n"); e manda para o compilador só o printf("Modo normal\n");. Para o compilador, é como se a outra linha nunca tivesse sido escrita.

As diretivas não aparecem no executável porque elas não são instruções da linguagem C. São ordens para o pré-processador, que as executa e depois remove do código: #include vira o conteúdo do arquivo, #define vira a substituição de texto, e #ifdef vira só o trecho escolhido. O compilador recebe um código “limpo”, sem nenhuma diretiva, e é desse código que sai o executável. Por isso, diferente de um if, o trecho não escolhido não ocupa espaço nem é testado durante a execução: ele simplesmente não existe no programa final.