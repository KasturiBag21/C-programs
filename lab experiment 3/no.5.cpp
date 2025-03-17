#include<stdio.h>
int main(){
	int n,a,b,c;
	a=0;b=1;
	printf("The fibonacci series is:\n");
	printf("%d\n",a);
	printf("%d\n",b);
	do
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		++n;
	}
	while(n<=10);
	
	return 0;	
}
