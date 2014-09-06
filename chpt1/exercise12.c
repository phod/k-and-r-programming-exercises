#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
  int c, state;
  c = getchar();
  state = OUT;
  while (c != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        printf("\n");
      }
      state = OUT;
    } else {
      putchar(c);
      state = IN;
    }
    c = getchar();
  }
}
