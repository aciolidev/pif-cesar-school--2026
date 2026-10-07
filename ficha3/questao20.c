#include <stdio.h>

int main() {
    int codigo;

    printf("%-8s %-8s %-8s\n", "Decimal", "Hexa", "Caractere");
    printf("----------------------------\n");

    for (codigo = 32; codigo <= 126; codigo++) {
        printf("%-8d %-8X %-8c\n", codigo, codigo, codigo);
    }

    return 0;
}