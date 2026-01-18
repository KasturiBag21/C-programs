#include<stdio.h>
int main()
{
  int a = 10;

  int *ptr = &a;

  *ptr = 20;

  printf("The value of the constant integer variable is %d\n", a);

  return 0;
}
