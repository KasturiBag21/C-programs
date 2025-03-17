//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 50
//
//void enqueue();
//void dequeue();
//void display();
//int queue[MAXSIZE];
//int front=-1;
//int rear=-1;
//main(){
//	int choice;
//	while(1){
//		printf("\nPerform the operation in Queue:");
//		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
//		printf("\n\nEnter the choice:");
//		scanf("%d",&choice);
//		switch (choice)
//			{
//			case 1:
//				enqueue();
//				break;
//			case 2:
//				dequeue();
//				break;
//			case 3:
//			    display();
//				break;	
//			case 4:
//			    exit(0);
//			 default:
//			 printf("\ninvalid choice!");		
//		}
//	}
//}
//void enqueue(){
//	int add_item;
//	if (rear == MAXSIZE - 1)
//	printf("\nQueue is Overflow");
//	else
//	if (front == -1 && rear == -1)
//	front=0;rear=0;
//	printf("\nInsert the element in queue:");
//	scanf("%d",&add_item);
//	rear = rear + 1;
//	queue[rear]=add_item;
//}
//void dequeue(){
//	int add_item;
//	if(front == -1 || front > rear){
//	printf("\nQueue is Underflow");
//	return;
//}
//	else
//	printf("\nElement deleted from Queue is %d",add_item);
//	front++;
//}
//void display(){
//	int i;
//	if (front == -1 && rear == -1)
//	printf("Queue is empty");
//	else
//	printf("Elements in the Queue:\n");
//	for(int i = front; i <= rear; i++)
//	printf("%d\n",queue[i]);
//	printf("\n");
//}
//
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int queue_a[MAX];
int front=-1,rear= -1;
void enqueue();
void dequeue();
void display();

int main()
{
	while(1)
	{
	int a;
	printf("\n1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("4.Exit\n");
   	printf("Enter your choice\n");
   	scanf("%d",&a);
   	
   	switch(a)
   	{
   		case 1: 
   		        enqueue();
   		        break;
   		case 2: 
		        dequeue();
		         break;
	    case 3: 
		        display();
		        break;
		case 4: 
		        exit(0);
		default:printf("wrong choice\n");
		       
	   }
	}
    
}
void enqueue()
{
	int item;
	if(rear==MAX-1)
	printf("queue is overflow\n");
	else {
	if (front== -1)
	front =0;
	printf("input element in queue:\n");
   	scanf("%d",&item);
   	rear++;
	queue_a[rear]= item;
	}
}

void dequeue()
 {
 	if(front==-1&&rear==-1)
 	{
    printf("queue is underflow\n");
 	return;
 }
 	else{
 	printf("deleted item is:%d",queue_a[front]);
 	front++;
 }
 printf("\n");
 }
 
void display()
{
	if(front==-1){
	printf("queue is empty\n");
}
else{
printf("Queue elements are:\n");
    int i = front;
    while (i != rear)
    {
        printf("%d\n", queue_a[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", queue_a[rear]);
}
	}



















