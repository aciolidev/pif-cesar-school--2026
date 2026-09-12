#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada, alturaCm;
    int degraus;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcancar (m): ");
    scanf("%f", &alturaDesejada);

    
    alturaCm = alturaDesejada * 100;

    degraus = alturaCm / alturaDegrau;

    if (alturaCm > degraus * alturaDegrau) {
        degraus++;
    }

    printf("Quantidade minima de degraus: %d\n", degraus);

    return 0;
}