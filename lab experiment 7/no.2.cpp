#include<stdio.h>
struct student
{
	char name[100];
	int roll;
	float marks;
};

int main()
{
	struct student s[10];
	int i;
	
	
	for (i=0;i<10;i++)
	
	{
		printf("Enter name,roll and marks of the student:\n");
		scanf("%s%d%f",s[1].name,&s[1].roll,&s[1].marks);
	}
	printf("input details are:\n");
	
	for(i=0;i<10;i++)
	{
		printf("name:%s\n",s[1].name);
		printf("roll:%d\n",s[1].roll);
		printf("marks:%f\n",s[1].marks);
	}
	
}
