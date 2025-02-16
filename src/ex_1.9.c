#include <stdio.h>

main() {
    int c;
    int isPreviousCharSpace = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && !isPreviousCharSpace) {
            isPreviousCharSpace = 1;
            putchar(c);
        }
        else if (c != ' ') {
            isPreviousCharSpace = 0;
            putchar(c);
        }
    }
}
