#include <stdio.h>

int main() {
    int n, i, arr[100], *ptr;

    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    printf("The elements you entered are:\n");
    for (i = 0; i < n; i++) 
	{
        printf("%d\n", *(ptr + i));
    }
    
    return 0;
}

