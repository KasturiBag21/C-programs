#include<stdio.h>
int LeapYear(int Year){
	if(Year%4==0)
	{
		if(Year%100==0)
		{
			if(Year%400==0)
			printf("%d is a Leap Year\n",Year);
			else
			printf("%d is not a Leap Year\n",Year);
		}
		else
		printf("%d is a Leap Year\n",Year);
	}
	else
	printf("%d is not a Leap Year\n",Year);
}
int main(){
	int Year;
	printf("Enter Year:");
	scanf("%d",&Year);
	LeapYear(Year);
	
	return 0;
}

	
