#include<stdio.h>
float findAverage(int temperature[],int size){
	int sum=0;
	for(int i = 0;i < size; i++){
		sum+=temperature[i];
	}
	return(float)sum/size;
}
void findHottestColdest(int temperature[],int size,int * hottest, int * coldest){
	*hottest = *coldest=temperature[0];
	for(int i=1;i<size;i++){
		if(temperature[i]>*hottest){
			*hottest=temperature[i];
		}
		if(temperature[i]<*coldest){
			*coldest=temperature[i];
		}
	}
}
int calculateRange(int hottest,int coldest){
	return hottest-coldest;
}
int main(){
	int temperature_data[]={25,28,27,30,31,29,26};
	int size=sizeof (temperature_data,size);
	float average=findAverage(temperature_data,size);
	printf("Average temperature for the week:%f\n",average);
	int hottest,coldest;
	findHottestColdest(temperature_data,size,&hottest,&coldest);
	printf("Hottest day:%d\n",hottest);
	printf("coldest day:%d\n",coldest);
	int range=calculateRange(hottest,coldest);
	printf("Temperature range for the week:%d\n",range);
	return 0;
	
}
