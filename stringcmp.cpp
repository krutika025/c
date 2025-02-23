#include <stdio.h>
#include <string.h>
int main()
{
	char str1[6]="anuN";
	char str2[6]="world";
	
	if(strcmp(str1, str2) ==0)
	{
		printf("same");
	}
	else
	{
		printf("different");
	}
}

