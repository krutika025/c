#include<stdio.h>
int main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		if(i==2)
		{
			continue;
		}
		printf("\n %d",i);
	}
}
