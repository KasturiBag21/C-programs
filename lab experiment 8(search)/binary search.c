#include <stdio.h>
void sortarray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarsearch(int arr[], int size, int key){
    sortarray(arr, size);
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key)
            return mid;
        else if (arr[mid] >key)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;

}

int main(){
    int arr[] = {10,40,60,20,70,30,80,90,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter Number:");
    scanf("%d", &key);

    int res = binarsearch(arr, size,key);
    if(res != -1){
        printf("Element %d found at %d Index",key,res);
    }
    else{
        printf("Element %d not Found",key);
    }
    return 0;
}
