#include<stdio.h>
int main(){
	char ch;
	int a,b,result;
	printf("Enter an operator:");
	scanf("%c",&ch);
	printf("Enter two operands:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	switch(ch)
	
	{
		case'+':
			result = a+b;
			break;
		case'-':
			result = a-b;
			break;
		case'*':
			result = a*b;
			break;
		case'/':
			result = a/b;
			break;
		case'%':
			result = a%b;
			break;				
			
	}
	printf("Result=%d",result);
	
	return 0;
}
