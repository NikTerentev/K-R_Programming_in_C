#include <stdio.h>

#define MAX_WORD_LENGTH 20
#define OUT              0
#define IN               1

main() {
  int c, wordLength, state, i;
  int wLengths[MAX_WORD_LENGTH + 1];

  wordLength = 0;
  state = OUT;

  for (i = 0; i < MAX_WORD_LENGTH + 1; i++)
    wLengths[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;

      /* Corner case */
      if (wordLength > MAX_WORD_LENGTH)
        wordLength = MAX_WORD_LENGTH;

      wLengths[wordLength] += 1;
      wordLength = 0;
    } else if (state == OUT) {
      state = IN;
      wordLength += 1;
    } else if (state == IN) {
      wordLength += 1;
    }
  }

  printf("Horizontal Hystogram:\nWord length   Words count\n");
  printf("             0 1 2 3 4 5 6 7 8 9 10\n");
  for (i = 1; i < MAX_WORD_LENGTH + 1; i++) {
    printf("%11d   ", i);
    int y;
    for (y = 0; y < wLengths[i]; y++)
      printf("■■");
    printf("\n");
  }

  /* TODO: Add vertical hystogram output */
}
