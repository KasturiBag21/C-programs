#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the 1st number:");
	scanf("%d",&a);
	printf("Enter the 2nd number:");
	scanf("%d",&b);
	printf("Enter the 3rd number:");
	scanf("%d",&c);
	
	if(a>b && a>c)
	printf("1st number is largest",a);
	else if(b>a && b>c)
	printf("2nd number is largest",b);
	else 
	printf("3rd number is largest",c);
	
	return 0;
}
