#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char line[], int len);
void copy(char to[], char from[]);

int main() {
  int len;
  char line[MAXLINE];

  while ((len = getLine(line, MAXLINE)) > 0) {
    reverse(line, len);
    printf("%s\n", line);
  }
  
  return 0;
}

int getLine(char s[], int lim) {
  int c, i;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from [i]) != '\0') {
    i++;
  }
}

void reverse(char line[], int len) {
  char temp[MAXLINE], i;
  for (i = 0; i < len; i++) {
    temp[i] = line[len-i-1];
  }
  copy(line, temp);
}
