#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main(){
	struct student s1={23010,"Akanshyee",97.35};
	printf("roll no:%d\n",s1.roll);
	printf("name:%s\n",s1.name);
	printf("marks:%f\n",s1.marks);
}
