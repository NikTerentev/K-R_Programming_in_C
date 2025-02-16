#include <stdio.h>

main() {
    int character, spaceNumber, tabNumber, nlineNumber;
    spaceNumber = tabNumber = nlineNumber = 0;

    while ((character = getchar()) != EOF) {
        switch (character) {
            case ' ':
                ++spaceNumber;
                break;
            case '\t':
                ++tabNumber;
                break;
            case '\n':
                ++nlineNumber;
                break;
        }
    }

    printf("Number of spaces: %d\nNumber of tabs: %d\nNumber of new lines: %d\n", spaceNumber, tabNumber, nlineNumber);
}
