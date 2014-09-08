#include <stdio.h>
#define TABSIZE 4

int main() {
  int c, spaceCount;
  spaceCount = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      spaceCount++;
      if (spaceCount == TABSIZE) {
        printf("\t");
        spaceCount = 0;
      }
    } else {
      while (spaceCount > 0) {
        printf(" ");
        spaceCount--;
      }
      putchar(c);
    }
  }
  putchar(c);
  return 0;
}
