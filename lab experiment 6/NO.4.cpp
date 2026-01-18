#include <stdio.h>
#include <string.h>

int countWords(char *str) {
  int state = 0;
  int wc = 0;

  while (*str) {
    if (*str == ' ' || *str == '\n' || *str == '\t')
      state = 0;
    else if (state == 0) {
      state = 1;
      wc++;
    }
    str++;
  }
  return wc;
}

int main() {
  char str[] = "One two three\n four\tfive ";
  printf("No of words: %d\n", countWords(str));
  return 0;
}

