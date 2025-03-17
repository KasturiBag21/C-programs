#include<stdio.h>
float calculateMedian(int arr[],int size){
	if(size % 2 == 0){
		int mid1 = size / 2 - 1;
		int mid2 = size / 2;
		return (arr[mid1] + arr[mid2])/ 2.0;
	}else{
		return arr[size/2];
	}
}
int main(){
	int n;
	printf("Enter the no.of elements in the array:");
	scanf("%d",&n);
	int number[n];
	printf("Enter %d elements:\n",n);
	for(int i = 0 ; i < n; i++){
		scanf("%d",&number[i]);
	}
	float median = calculateMedian(number, n);
	printf("The Median is:%f\n",median);
	return 0;
}
