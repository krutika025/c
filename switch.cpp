#include<stdio.h>
int main()
{
	int num;
	
	printf("enter the number");
	scanf("%d",&num);
	
	switch (num)
	{
		case 1:printf("this is no.1");
		break;
		
		case 2: printf("this is no.2");
		break;
		
		case 3: printf("this is no.3");
		break;
		
		default: printf("enter valid input");
		break;
		
	}
	return 0;
}
