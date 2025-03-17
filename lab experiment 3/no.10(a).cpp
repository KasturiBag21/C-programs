#include <stdio.h>
int main()
{
  int n, i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  // loop for each row
  for (i = 1; i <= n; i++)
  {
    // loop for printing stars
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }
    // move to next line
    printf("\n");
  }
  return 0;
}
