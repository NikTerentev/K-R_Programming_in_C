#include <stdio.h>

#define    LOWER    -17.8
#define    UPPER    148.9
#define    STEP     11.111

int celciusToFahrenheint(int celsius);

int main() {
    float celsius;

    printf("celsius fahrenheit\n");
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%7.1f %10d\n", celsius, celciusToFahrenheint(celsius));
    }

    return 0;
}

int celciusToFahrenheint(int celsius) {
    return (int)(celsius * 9) / 5 + 32;
}
