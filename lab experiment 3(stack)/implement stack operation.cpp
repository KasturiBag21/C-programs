#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1,stack[SIZE];
void push();
void pop();
void show();
int main(){
	int choice;
	while(1){
		printf("\n Perform the opertaion in stack:");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice: ");  
        scanf("%d", &choice);  
        switch (choice)  
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
			    show();
				break;	
			case 4:
			    exit(0);
			 default:
			 printf("\ninvalid choice!");		
		}
		
	}
}
void push(){  
    int x;  
    if (top == SIZE - 1)  
    {  
        printf("\n Stack Overflow!");  
    } else  {  
        printf("\nEnter the element to push: ");  
        scanf("%d", &x);  
        top = top + 1;  
       stack[top] = x;  
    }  
}
void pop(){
	if (top == -1)
	{
		printf("\n Stack underflow!");
	} else {
		printf("\nEnter the element to pop: %d",stack[top]); 
		top=top-1;
	}
}
void show(){
	if (top == -1)
	{
		printf("stack underflow!");
	} else {
		printf("Element in the stack:\n");
		for(int i = top; i >= 0;--i)
		printf("%d\n",stack[i]);
		
	}
}

