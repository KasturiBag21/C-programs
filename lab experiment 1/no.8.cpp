#include<stdio.h>
int main(){
	
	int a,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("pre increment is:%d\n",c=++a);
	printf("post increment is:%d\n",c=a++);
	
	return 0;
}
