 #include<stdio.h>
#include<string.h>
int main()

	{
		int i,size1=0,size2=0;
		printf("enter size1:");
		scanf("%d",&size1);
		printf("enter size2:");
		scanf("%d",&size2);
		
		char str1[size1+1], str2[size2+1];
		printf("enter 1st string");
		
		gets(str1);
		printf("enter 2nd string");
		gets(str2);
		
		for (i=0;i<size1;i++)
		{
			scanf(" %c",&str1[i]);
		}
		printf("enter 2nd string");
		for (i=0;i<size2;i++)
		{
			scanf(" %c",&str2[i]);
		}
		
		if(strcmp(str1,str2)==0)
		{
			printf("same");
		}
		else
		{
			printf("different");
		}
		
		printf("\n%s", str1);
		printf("\n%s", str2);
		
	}
