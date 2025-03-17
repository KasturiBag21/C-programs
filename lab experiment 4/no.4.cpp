#include <stdio.h>
int main()
{
  int sum = 0; 
  for (int i = 0; i <= 10; i++)
  {
    if (i % 2 != 0)
    {
      sum = sum + i;
    }
  }
  printf("The sum of odd numbers between 0 to 10 is %d\n", sum);
  return 0;
}

