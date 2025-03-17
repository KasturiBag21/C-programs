#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int Q[MAX], front = -1, rear= -1;
void PUSH()
{
    int x;
    if (rear == MAX - 1)
    {
        printf("QUEUE OVERFLOW\n");
        return;
    }
    if (rear == -1 && front == -1)
    {
        rear = 0;
        front = 0;
    }
    else
        rear += 1;
    printf("enter the element to be insert :");
    scanf("%d", &x);
    Q[rear] = x;
    printf("\n");
}
void POP()
{
    int x;
    if (front == -1)
    {
        printf("QUEUE UNDERFLOW\n");
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front += 1;
    x = Q[front];
    printf("DELETED ELEMENT IS :%d\n", x);
    printf("\n");
}
void traverse()
{
    if (front == -1)
        printf("QUEUE IS EMPTY\n");
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", Q[i]);
        }
    }
    printf("\n\n");
}
int main()
{
    int n;
    while (1)
    {
        printf("\n");
        printf("1.INSERT ELEMENT\n");
        printf("2.DELETE ELEMENT\n");
        printf("3.TRAVERSE OF QUEUE\n");
        printf("4.EXIT\n");
        printf("\n");

        printf("CHOOSE ANY OPERATION: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            PUSH();
            break;
        case 2:
            POP();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("INVALID OPERATION.\n");
        }
    }
}
