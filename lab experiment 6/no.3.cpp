#include<stdio.h>
int main()
{
	char string[100];
	printf("enter a string:");
	gets(string);
	printf("The reverse of a string:");
	
	int length=0;
	while(string[length]){
		length++;
	}
	for(int i=length;i>=0;i--)
	printf("%c",string[i]);
	
	return 0;
	
}
