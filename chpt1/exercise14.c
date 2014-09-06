#include <stdio.h>
#define ALPHABET 26

int main() {
  int c, i, j, currlen, state;
  int letters[ALPHABET];
  
  for (i = 0; i < ALPHABET; i++) {
    letters[i] = 0;
  }
  
  c = getchar();
  while (c != EOF) {
    if (c >= 'a' && c <= 'z') {
      letters[c-'a']++;
    }
    c = getchar();
  }

  for (i = 0; i < ALPHABET; i++) {
    printf("%d: ", i);
    for (j = 0; j < letters[i]; j++) {
      printf("#");
    }
    printf("\n");
  }
  
}
