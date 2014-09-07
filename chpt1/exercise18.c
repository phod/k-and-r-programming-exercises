#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
int findEnd(char line[]);
void deleteTrail(char line[], int len);

int main() {
  int len;
  int shortlen;
  int max;
  char line[MAXLINE];
  
  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    shortlen = findEnd(line);
    deleteTrail(line, shortlen);
    if (shortlen > 0){
      printf("%s\n", line);
    }
  }
  return 0;
}

int getLine(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int findEnd(char line[]) {
  int pos, i;
  pos = 0;
  i = 0;
  while (line[i] != '\0') {
    if (!(line[i] == ' ' || line[i] == '\t')) {
      pos = i;
    }
    i++;
  }
  return pos;
}

void deleteTrail(char line[], int len) {
  line[len] = '\0';
}
