#include<stdio.h>
int main(){
	int n;
	printf("Enter the age:");
	scanf("%d",&n);
	if(n>18)
	printf("Eligible to vote");
	else
	printf("Not eligible to vote");
	
	return 0;
}
