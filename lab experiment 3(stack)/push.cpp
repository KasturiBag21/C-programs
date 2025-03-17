#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push();
void display(); 
int main(){
	int choice;
	while(1)
	{  
        printf("\nPerform operations on the stack:");  
        printf("\n1.Push the element\n2.Display\n3.End");  
        printf("\n\nEnter the choice: ");  
        scanf("%d", &choice);  
        switch (choice)  
        {  
        case 1:  
            push();  
            break;  
        case 2:  
            display(); 
            break;
        case 3:
            exit(0); 
        default:  
            printf("\nInvalid choice!!");  
        } 
    }
	
}

int a;
void push()
{
	if(top == SIZE -1)
		printf("Stack is overflow\n");
	else
	printf("Enter the element to push:");
	scanf("%d",&a);
	
	top++;
	stack[top]=a;
	printf("%d is pushed to stack\n",a);
}
void display()
{
	if (top == -1)
	{
		printf("stack empty!");
	} else {
		printf("Element in the stack:\n");
		for(int i = top; i >= 0;--i)
		printf("%d\n",stack[i]);
}
}


