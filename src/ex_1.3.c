#include <stdio.h>

#define    LOWER    0
#define    UPPER    300
#define    STEP     20

main() {
    int fahr;

    printf("fahrenheit celcius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%10d %7.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}
