#include<stdio.h>
int main(){
	int a,b,choice;
	char again;
printf("enter a:");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);


	do{
	
	printf("\n 1.addition is:")  ;
	printf("\n 2.substraction");
	printf("\n 3.division is:");
	printf("\n 4.multiplication is :");
	
	printf("\n enter your choice:");
	scanf("%d",&choice);
	if(choice==1){
		printf("addition is :%d",a,b,a+b);
	}
	}
	while(again);
	{
	printf("\n\n do you want to continue:[y/n]");
	scanf("%c",&again);
	scanf("%c",&again);
	
	if(again=='y'|| again=='Y');
	{
		goto a,b;
	}
	
	
	
	
	
}
