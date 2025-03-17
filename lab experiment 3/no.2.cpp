#include <stdio.h>
unsigned int factorial(unsigned int n)
{
  if (n == 0) // base case
    return 1;
  else
    return n * factorial(n - 1); // recursive call
}
int main()
{
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Factorial of %d = %u\n", num, factorial(num));
  return 0;
}


