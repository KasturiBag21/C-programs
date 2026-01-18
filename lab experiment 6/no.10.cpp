#include <stdio.h>
#include <string.h>

int main() {
  char s1[100] = "Hello, ";
  char s2[] = "world!";
  // concatenate s2 to s1
  strcat(s1, s2);
  // print the concatenated string
  printf("%s\n", s1);
  return 0;
}

