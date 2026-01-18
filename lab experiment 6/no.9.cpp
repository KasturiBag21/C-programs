#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int len;
  printf("Enter the string: ");
  scanf("%s", str);
  // using the strlen() function to find the length of the string
  len = strlen(str);
  printf("Length of the string is %d\n", len);
  return 0;
}

