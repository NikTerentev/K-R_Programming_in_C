#include <stdio.h>
#define MAXLINE 10

int getlinenew(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len;
    int max;
    int c;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getlinenew(line, MAXLINE)) > 0) {
        if (line[len - 1] != '\n') {
            while ((c=getchar()) != '\n') {
                ++len;
            }
            ++len;
        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("Max length: %d\n", max);
        printf("Longest string: %s", longest);
    }
    return 0;
}

int getlinenew(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
   int i;
   i = 0;
   while ((to[i] = from[i]) != '\0')
       ++i;
}
