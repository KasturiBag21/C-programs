#include<stdio.h>
int armstrong(int n)
{
  int l=n;
  int s=0;
  while(l>0)
  {
    int r=l%10;
    s=s+(r*r*r);
    l=l/10;
  }
  if(s==n)
  printf("\nArmstrong:%d",n);
  else
  printf("\n%d is Not armstrong",n);
}
int main()
{
  int n;
  printf("\nEnter a number:");
  scanf("%d",&n);
  armstrong(n);
  return 0;
}
