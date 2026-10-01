#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    double raio, area, volume;

    printf("Digite o raio R da esfera: ");
    scanf("%lf", &raio);

    area   = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("Area da superficie = %.3f\n", area);
    printf("Volume             = %.3f\n", volume);

    return 0;
}