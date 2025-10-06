#include <stdio.h>

int main() {
    printf("Temperature Conversion Table\n\n");
    printf("Celsius\t\tFahrenheit\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%7.0f\t\t%10.2f\n", fahr, celsius);

        fahr = fahr + step;
    }

    return 0;
}
