#include <stdio.h>
#define TABSIZE 4

void detab();

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      detab();
    } else {
      putchar(c);
    }
  }
  putchar(c);
  return 0;
}

void detab() {
  int i;
  i = 0;
  while (i < TABSIZE) {
    printf(" ");
    i++;
  }
}
