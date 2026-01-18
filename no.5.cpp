#include<stdio.h>
int main()
{
	int num1=4;
	int num2=11;

	
	int *ptr1=&num1;
	int *ptr2=&num2;
	
	int sum;
	sum=*ptr1 + *ptr2;
	
	printf("The sum of the two numbers: %d",sum);
	
	return 0;
}
