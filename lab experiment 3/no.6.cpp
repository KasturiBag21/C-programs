#include<stdio.h>
int main()
{
    int num, i,k=0;
    printf("enter any number:");
    scanf("%d",&num);
    i=1;
    while(i<=num)
    {
        if(num%i==0)    
        k++;
        i++;
    }
    if(k==2)
    printf("its a prime number");
    else
    printf("not a prime number");
    return 0;    
}
