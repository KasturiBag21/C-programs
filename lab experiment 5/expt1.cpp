#include <stdio.h>

int main() 
{
    // Declare an array of integers with a size of 5
    int arr[5];
    
    // Initialize the array elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    // Display the array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
	return 0;
}
