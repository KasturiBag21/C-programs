#include<stdio.h>
int main(){
	int a,b,c;
	int *p,*q,*r;
	printf("The value of the interger:");
	scanf("%d%d%d",&a,&b,&c);
	p=&a;q=&b;r=&c;
	
	if(*p>*q)
	{
		if(*p>*r)
		printf("%d is greater",a);
		else
		printf("%d is greater",c);
	}
	else
	{
		if(*q>*r)
		printf("%d is greater",b);
		else
		printf("%d is greater",c);
	}
	
	return 0;
}
