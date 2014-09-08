#include <stdio.h>
#define INCOMMENT 0
#define OUTCOMMENT 1
#define STARTCHAR 2
#define ENDCHAR 3
#define LINECOMMENT 4
#define BLOCKCOMMENT 5

int getstate(int c, int state);

int main() {
  int state, c;
  state = OUTCOMMENT;
  while((c = getchar()) != EOF) {
    state = getstate(c, state);
  }
  putchar(c);
  return 0;
}

int getstate(int c, int state) {
  if (state == OUTCOMMENT && c == '/') {
    state = STARTCHAR;
  } else if (state == STARTCHAR && c == '*') {
    state = BLOCKCOMMENT;
  } else if (state == STARTCHAR && c == '/') {
    state = LINECOMMENT;
  } else if (state == STARTCHAR) {
    state = OUTCOMMENT;
  } else if (state == LINECOMMENT && c == '\n') {
    state = OUTCOMMENT;
  } else if (state == BLOCKCOMMENT && )
}
