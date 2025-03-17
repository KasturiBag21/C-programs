#include <stdio.h>
int main()
{
  int i, j;

  for (i = 1; i <= 3; i++)
  {

    for (j = 1; j <= 10; j++)
    {

      printf("%d ", j);
      if (j == 6)
      {
        break;
      }
    }
    printf("\n");
  }
  return 0;
}

