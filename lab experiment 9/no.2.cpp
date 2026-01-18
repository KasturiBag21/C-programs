#include<stdio.h>
int vowel(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='O'||ch=='I'||ch=='O'||ch=='U')
	printf("%cIt is a vlowel");
	else 
    printf("%cIt is a consonent");
}
int main(){
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	vowel(ch);
	
	return 0;
}
