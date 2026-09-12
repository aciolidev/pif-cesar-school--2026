#include <stdio.h>

int main() {
  int c;

  do {
    c = getchar();

  } while (c == '\n' || c == ' ' || c == '\r');

  if (c != EOF) {
      printf("Caractere lido: %c\n",c);
  }
 
return 0;
  
}