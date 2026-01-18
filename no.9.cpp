#include<stdio.h>
int main()
{
  int a[5],max,*p,i,n;
  p=a;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter the number:");
  for(i=0;i<n;i++)
  { 
  scanf("%d",(p+i)); 
  }
  max=*p;
  for(i=0;i<n;i++)
  {
    if(*(p+i)>max)
    { 
	 max=*(p+i);
	}
  }
  printf(" largest element is %d",max);
 
  return 0;
}
