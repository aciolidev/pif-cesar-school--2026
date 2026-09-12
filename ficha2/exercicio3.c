#include <stdio.h>

int main() {
  int num;

  printf("Digite um número inteiro: ");

  if(scanf("%d", &num) == 1) {
   
    printf("Decimal: %d | Hexadecimal: %X | Octal: %o | ASCII: %c\n", num, num, num, num);
  }

return 0;

}