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