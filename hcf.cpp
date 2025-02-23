#include<stdio.h>
int main(){
	
	int i,a,hcf,b,small;
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	if(a<b){
		small=a;
	}
	else{
		small=b;
	}
	
	for(i=2;i<=small;i++)
	{
		if(a%i==0 && b%i==0)
		{
			hcf=i;
		}
		
		
	}
	printf("\n hcf of %d and %d is %d",a,b,hcf);
	
	
	
	
	
	
}
