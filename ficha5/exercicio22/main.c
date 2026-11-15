#include <stdio.h>
#include "areas.h"

int main(void) {
    double raio, base, alt;

    printf("Raio do circulo: ");
    scanf("%lf", &raio);
    printf("Area do circulo: %.2f\n\n", A_CIRC(raio));

    printf("Base e altura do retangulo: ");
    scanf("%lf %lf", &base, &alt);
    printf("Area do retangulo: %.2f\n\n", A_RET(base, alt));

    printf("Base e altura do triangulo: ");
    scanf("%lf %lf", &base, &alt);
    printf("Area do triangulo: %.2f\n", A_TRI(base, alt));
    return 0;
}