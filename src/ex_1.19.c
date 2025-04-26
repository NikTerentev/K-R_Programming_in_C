#include <stdio.h>

#define MAX_LINE_LENGTH 100

int get_line(char s[], int max_len);
void reverse(char s[], int line_length);


int main() {
    int c, line_length;
    char line[MAX_LINE_LENGTH];

    while ((line_length = get_line(line, MAX_LINE_LENGTH)) != 0) {
        reverse(line, line_length);
        printf("%s", line);
    }
}

int get_line(char s[], int max_len) {
    int c, i;
    for (i = 0; i < max_len - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void reverse(char s[], int line_length) {
    int i, c;

    int last_char_pos = line_length - 1;

    if (s[last_char_pos] == '\n')
        last_char_pos--;

    for (i = 0; i <= last_char_pos / 2; i++) {
        c = s[i];
        s[i] = s[last_char_pos - i];
        s[last_char_pos - i] = c;
    }
}
