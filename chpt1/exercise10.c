#include <stdio.h>

int main() {
  int c;
  c = getchar();

  while (c != EOF) {
    if (c == '\\') {
      putchar(c);
      putchar(c);
    } else if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    } else {
      putchar(c);
    }
    c = getchar();
  }
}
