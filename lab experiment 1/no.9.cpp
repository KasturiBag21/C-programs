#include<stdio.h>
int main(){
	
	int a,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("pre decrement is:%d\n",c=--a);
	printf("post decrement is:%d\n",c=a--);
	
	return 0;
}
