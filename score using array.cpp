#include<stdio.h>
int main()
{
	int a,sum;
	float avg;
	int arr[6];
	
	
	printf("\n enter marks:");
	for(int i=0;i<6;i++)
	
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	
	avg=sum/6;
	
	printf("avg is:%f",avg);
	
	
}



