#include <stdio.h>
int isPrime(int n)
{
  int i;
  
  for (i = 2; i <= n / 2; i++)
  {
    
    if (n % i == 0)
    {
      return 0;
    }
  }
 
  return 1;
}
int main()
{
  int low, high, i;
  printf("Enter two numbers: ");
  scanf("%d %d", &low, &high);
  printf("Prime numbers between %d and %d are:\n", low, high);
  
  for (i = low; i <= high; i++)
  {
    if (isPrime(i))
    {
      printf("%d ", i);
    }
  }
  return 0;
}

