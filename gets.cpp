#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	
	printf("enter the number of characterr of your string:");
	scanf("%d",&n);
	char name[n+1];
	printf("enter your string");
	gets (name);
	gets (name);
	for (int i=0;i<n;i++)
	{
		printf("%C \n",name[i]);
		
	}
	
	
}
