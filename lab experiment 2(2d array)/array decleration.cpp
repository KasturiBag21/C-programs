//#include<stdio.h>
//int main()
//{
//	int M,N,sum=0,arr[M][N];
//	printf("enter the size of row:");
//	scanf("%d",&M);
//	printf("enter the size of coloumns:");
//	scanf("%d",&N);
//	for(int i = 0 ; i < M ; i++)
//	{
//		for(int j = 0 ; j < N ; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	printf("elements are:\n");
//	for( int i = 0 ;i < M ; i++ )
//	{
//		for( int j = 0 ; j < N ; j++ )
//		{
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	for( int i = 0 ; i < M ; i++ )
//	{
//		for( int j = 0;j < N;j++ )
//		{
//			sum=sum+arr[i][j];
//		}
//		printf("\n The sum of the number:%d",sum);
//	}
//	printf("\n");
//	
//	return 0;
//	
//	
//}
#include <stdio.h>

int main()
{
    int N = 3, M = 4;
    int arr[N][M] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of all elements is %d\n", sum);
    
    return 0;
}

