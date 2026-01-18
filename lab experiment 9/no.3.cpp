#include<stdio.h>
int largest(int num1,int num2,int num3){
	if(num1>num2 && num1>num3)
	printf("1st number is largest",num1);
	else if(num2>num1 && num2>num3)
	printf("2nd number is largest",num2);
	else 
	printf("3rd number is largest",num3);
}
int main(){
	int num1,num2,num3;
	printf("Enter the 1st number:");
	scanf("%d",&num1);
	printf("Enter the 2nd number:");
	scanf("%d",&num2);
	printf("Enter the 3rd number:");
	scanf("%d",&num3);
	largest(num1,num2,num3);
	
	return 0;
}
	
