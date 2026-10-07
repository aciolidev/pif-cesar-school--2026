#include <stdio.h>

int main() {
    int c;
    float f, k;

    printf("%10s %12s %12s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("------------------------------------\n");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5 + 32;
        k = c + 273.15;

        printf("%10.2f %12.2f %12.2f\n", (float) c, f, k);
    }

    return 0;
}