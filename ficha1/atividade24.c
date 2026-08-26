#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    printf("%-10s %s\n", "ALUNO(A)", "NOTA");
    printf("%-10s %s\n", "=========", "=====");

    printf("%-10s %4.1f\n", "ALINE", 9.0);
    printf("%-10s %s\n",   "MARIO", "DEZ");
    printf("%-10s %4.1f\n", "SERGIO", 4.5);
    printf("%-10s %4.1f\n", "SHIRLEY", 7.0);

    return 0;
}