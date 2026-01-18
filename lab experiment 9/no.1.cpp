#include<stdio.h>
int isEven(int n)
{
	if(n%2==0)
	printf("\n%d is even number.",n);
	else
	printf("\n%d is odd number.",n);
}

int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	isEven(n);
	return 0;
}
