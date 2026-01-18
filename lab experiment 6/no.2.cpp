#include<stdio.h>
int main()
{
	char string[100];
	int i,length=0;
	printf("enter a string:");
	gets(string);
	
	for(int i=0;string[i];i++){
		length++;
	}
	printf("The length of the stringis %d \n ",length);
	
	return 0;
	
}
