#include <stdio.h>

#define    LOWER    -17.8
#define    UPPER    148.9
#define    STEP     11.111

main() {
    float celsius;

    printf("celsius fahrenheit\n");
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%7.1f %10d\n", celsius, (int)(celsius * 9) / 5 + 32);
    }
}
