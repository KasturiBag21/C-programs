#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50

int CQueue[MAXSIZE];
int front=-1,rear=-1;
void CQINSERT(int val) 
{
    if (front==(rear+1)%MAXSIZE) 
	{
        printf("Circular Queue is full\n");
        return;
    } 
	else if (front==-1) 
	{
        front=rear=0;
        CQueue[rear]=val;
    } 
	else 
	{
        rear++;
        CQueue[rear]=val;
    }
    printf("Element inserted=%d\n",val);
}
void CQDELETE() {
    if (front==-1&&rear==-1) 
	{
        printf("Circular Queue is empty\n");
        return;
    }
    printf("Element deleted=%d\n",CQueue[front]);
    if (front==rear) {
        front=rear=-1;
    }  else {
        front++;
    }
}

int main() 
{
    int ch,val;
    while(1) 
	{
        printf("\nCircular Queue Operations:\n");
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch) 
		{
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &val);
                CQINSERT(val);
                break;
            case 2:
                CQDELETE();
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}






















