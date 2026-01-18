#include<stdio.h>
int main(){
	int a,b,c;
	int *p,*q;
	printf("Enter the value of the integer:");
	scanf("%d %d",&a,&b);
	p=&a;q=&b;
	
	int s;
	s=*p;
	*p=*q;
	*q=s;
	
	printf("The swap value of the integer:");
	scanf("%d %d",*p,*q);
	
	return 0;

}
