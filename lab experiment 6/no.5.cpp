#include <stdio.h>
#include <string.h>

int main()
{
  char s1[100], s2[100];
  int i, c = 0;

  printf("Enter the first string: ");
  gets(s1);

  printf("Enter the second string: ");
  gets(s2);
  if (strlen(s1) == strlen(s2))
  {
    for (i = 0; s1[i] != '\0'; i++)
    {
      if (s1[i] == s2[i])
        c++;
    }
    if (c == i)
      printf("The strings are equal.\n");
    else
      printf("The strings are not equal.\n");
  }
  else
    printf("The strings are not equal.\n");

  return 0;
}

