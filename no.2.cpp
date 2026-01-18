#include<stdio.h>
int main(){
	int a=21;
	int *ptr=&a;
	
	*ptr=4;
	
	printf("The value of a:%d\n",a);
	
	return 0;
}
