#include <stdio.h>

#define ROW_LEN 10

int getlinenew(char s[], int lim);


int main() {
    int c, i, len;
    char line[ROW_LEN + 1];

    while (getlinenew(line, ROW_LEN) != 0);

    return 0;
}

int getlinenew(char s[], int lim) {
    int c, i;
    for (i = 0; i <= lim && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == EOF)
        return 0;

    if (c == '\n')
        return 1;

    if (c != '\n') {
        s[i] = '\0';
        printf("%s", s);
    }

    while ((c = getchar()) != '\n') {
        printf("%c", c);
    }

    printf("%c", c);

    return 1;
}
