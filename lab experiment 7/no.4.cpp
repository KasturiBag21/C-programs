#include<stdio.h>
struct distance
{
	int feet;
	float inch;
};
int main()
{
	struct distance d1,d2,sum;
	
	printf("Enter first distance in feet and inch:");
	scanf("%d%f",&d1.feet,&d1.inch);
	printf("Enter second distance in feet and inch:");
	scanf("%d%f",&d2.feet,&d2.inch);
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	if(sum.inch>=12){
		sum.feet++;
		sum.inch-=12;
	}
	printf("sum of distances=%d feet and %f inch\n ",sum.feet,sum.inch);
	
	return 0;
	
}
