#include <stdio.h>

int main() {
  int tabs, newlines, spaces, c;
  tabs = newlines = spaces = 0;
  c = getchar();
  while (c != EOF) {
    if (c == ' ') {
      spaces++;
    } else if (c == '\n') {
      newlines++;
    } else if (c == '\t') {
      tabs++;
    }
    c = getchar();
  }
  printf("Tabs: %d\nNewlines: %d\nSpaces: %d\n", tabs, newlines, spaces);
}
