#include <stdio.h>
int main()
{
  int n, sum = 0, count = 0;
  printf("Enter up to 10 numbers (negative to stop):\n");
  
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &n);
    if (n < 0)
    {
      break;
    }
    sum += n;
    count++;
  }
  printf("The sum of %d numbers is %d\n", count, sum);
  return 0;
}

