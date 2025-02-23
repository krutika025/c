#include<stdio.h>
int main()
{
	int num,n1=0,n2=1,temp,i;
	printf("enter a number:");
	scanf("%d",&num);
	
	
	if(num<=0)
	{
		printf("please enter positive number:");
	}
	else
	{
		for(i=0;i<num;i++){
			printf("%d ",n1);
			temp=n1+n2;
			n1=n2;
			n2=temp;
		}
	
	
		
		
		
	}
	}
