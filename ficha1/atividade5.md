main()
{
printf("Linguagem C");
system("pause");
}

- Falta #include <stdio.h>, que é necessário para declarar a função printf()
- Falta #include <stdlib.h>, system é declarada nela
- system("pause") não é padrão ANSI C
- No final da função main() precisa ter o return 0