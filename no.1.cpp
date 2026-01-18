#include<stdio.h>
int main()
{
	int *ptr;
	
	int x=7;
	ptr=&x;
	
	printf("The value of x:%d\n",*ptr);
	
	
	*ptr=5;
	printf("The value of x:%d\n",*ptr);
	
	return 0;
}
