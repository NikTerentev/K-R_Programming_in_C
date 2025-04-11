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

  printf("Horizontal Hystogram:\nWords length   Words count\n");
  printf("             ");
  for (i = 0; i <= 10; i++)
    printf("%d ", i);
  printf("\n");

  int y;

  for (i = 1; i <= MAX_WORD_LENGTH; i++) {
    printf("%11d   ", i);
    for (y = 0; y < wLengths[i]; y++)
      printf("■■");
    printf("\n");
  }

  printf("\nVertical Hystogram:\n");

  printf("Words count\n");
  for (i = 10; i >= 1; i--) {
    printf("%6d  ", i);
    for (y = 1; y <= MAX_WORD_LENGTH; y++) {
      if (wLengths[y] >= i)
        printf("■  ");
      else
        printf("   ");
    }
    printf("\n");
  }
  printf("    ");
  for (i = 0; i <= MAX_WORD_LENGTH; i++)
    printf("%2d ", i);
  printf("Words length\n");
}
