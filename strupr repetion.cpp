#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i=5;
	while(i>0)
	{
		printf("\n enter name:");
		fgets(str, sizeof(str),stdin);
		printf("%s",strupr(str));
		i--;
		
	}
}
