#include<stdio.h>
int main(){
	
	char again;
	
	do{
	
	int m,n,choice;
	
	printf("enter m:");
	scanf("%d",&m);
	
	printf("enter n:");
	scanf("%d",&n);
	
	
	printf("\n 1.addition");
	printf("\n 2.substraction");

	printf("\n 3.division");
	
	printf("\n 4.multiplication");

	
	printf("\n enter your choice:");
	scanf("%d",&choice);
	
	if(choice==1){
		printf("addition of %d and %d is: %d",m,n,m+n);
	}
	else if(choice==2){
		printf("substraction of %d and %d is:%d",m,n,m-n);
	}
	else if(choice==3){
		printf("division of %d and %d is:%d",m,n,m/n);
	}
    else if(choice==4){
    	printf("multiplication of %d and %d is:%d",m,n,m*n);
	}
	else{
		printf("invalid");
	}
	
	printf("\n\nDo you want to continue again[Y/n]: ");
	scanf("%c",&again);
	scanf("%c",&again);
	
}
while(again == 'Y' || again == 'y');
}
