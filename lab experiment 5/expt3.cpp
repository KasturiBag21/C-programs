#include<stdio.h>
int main(){
	int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    
	if (n <= 0) {
        printf("Invalid input. The number of elements should be greater than 0.\n");
        return 1; 
    }
	int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];
	for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;  
}
