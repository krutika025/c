#include<stdio.h>
int main()
{
	int a,b,res;
	
	printf("enter a number 1:");
	scanf("%d",&a);
	
	printf("enter a number 2:");
	scanf("%d",&b);
	
	printf("calculator:");
	printf("\n 1.multiplication \n 2.division \n 3.addition \n 4.substraction \n enter operation to be performed ");
	scanf("%d",&res);
	
	switch(res)
	{
		case 1: printf("multiplication:%d",a*b);
		break;
		
		case 2: printf(" division is:  %.2f",a/b);
		break;
		
		case 3: printf(" addition is:  %d",a+b);
		break;
		
		case 4: printf("substraction is:%d ",a-b);
		break;
		
		default: printf("invalid input");
		
	}
	
	return 0;
	}
