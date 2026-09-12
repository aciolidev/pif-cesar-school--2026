#include <stdio.h>

int main() {
  int a = 1, b = 2, c = 3, d = 4;

  //ATENÇÃO!! RODAR UM CÓDIGO DE CADA VEZ (UMA QUESTÃO DE CADA VEZ) PARA VERIFICAR O RESULTADO CORRETO, POIS O VALOR DAS VARIÁVEIS MUDAM A CADA QUESTÃO.

  //questão 1
   printf("%d\n", a+= b +c);
   printf("%d\n", a);
   //RESPOSTA: a = 6: Como a foi declarado como int, então o resultado da soma de b + c (2 + 3) é 5, e ao somar com a (1) temos 6.
  //questão 2
   printf("%d\n", b*= c = d + 2);
   printf("%d\n", b);
   printf("%d\n", c);
   //RESPOSTA: b = 12 e c = 6: Como b foi declarado como int, então o resultado da soma de d + 2 (4 + 2) é 6, e ao multiplicar com b (2) temos 12.


  //questão 3
   printf("%d\n", d%= a + a + a);
   printf("%d\n", d);
   //RESPOSTA: d = 1: Como d foi declarado como int mas a divisão foi feita com o operador de módulo, então o resultado só pode ser inteiro.

 
  //questão 4
  printf("%d\n", d-= c -= b -=a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  //RESPOSTA: b = 1, c = 2, d = 2: Como b foi declarado como int, então o resultado da subtração de a (1) é 1, e ao subtrair com c (3) temos 2, e ao subtrair com d (4) temos 2.

  //questão 5
  printf("%d\n", a+= b += c += 7);
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  //RESPOSTA: a = 13, b = 12, c = 10: Como a foi declarado como int, então o resultado da soma de c + 7 (3 + 7) é 10, e ao somar com b (2) temos 12, e ao somar com a (1) temos 13.

  return 0;
}
