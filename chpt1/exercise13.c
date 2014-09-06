#include <stdio.h>
#define MAXWORDLEN 30
#define IN 1
#define OUT 0

int main() {
  int c, i, j, currlen, state;
  int wordlen[MAXWORDLEN];
  currlen = 0;
  state = OUT;
  
  for (i = 0; i < MAXWORDLEN; i++) {
    wordlen[i] = 0;
  }
  
  c = getchar();
  while (c != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state = IN){
        if (currlen < MAXWORDLEN) {
          wordlen[currlen]++;
        }
      }
      state = OUT;
      currlen = 0;
    } else {
      state = IN;
      currlen++;
    }
    c = getchar();
  }

  for (i = 1; i < MAXWORDLEN; i++) {
    printf("%d: ", i);
    for (j = 0; j < wordlen[i]; j++) {
      printf("#");
    }
    printf("\n");
  }
  
}
