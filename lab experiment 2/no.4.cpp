#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='O'||ch=='I'||ch=='O'||ch=='U')
	   printf("%c It is a vlowel");
	   else 
	   printf("%c It is a consonent");
	   
	   return 0;
}
