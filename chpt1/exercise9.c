#include <stdio.h>
#define SPACE 0
#define NOSPACE 1

int main() {
  int state,c;
  state = SPACE;
  c = getchar();
  while(c != EOF) {
    if (c == ' ') {
      if (state) {
        putchar(c);
      }
      state = SPACE;
    } else {
      putchar(c);
      state = NOSPACE;
    }
    c = getchar();
  }
}
