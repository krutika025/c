#include<stdio.h>
int main(){
	int num,i,m;
	
printf("enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
	
	printf("%d is ",num);
	m=num*i;
	printf("factorial is:",m);
}
}


