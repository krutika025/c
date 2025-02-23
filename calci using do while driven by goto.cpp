//Calculator using do-while, MENU driven by goto
#include<stdio.h>
 int main(){
 	
 	char choice;
 	
 	do{
	
	int num1,num2;
 	
 	printf("\n---------------------------------------------------");
 	printf("\nEnter the First Number: ");
 	scanf("%d",&num1);
 	printf("Enter the Second Number: ");
 	scanf("%d",&num2);
 	
 	xyz:printf("\n\nMENU\n");
 	printf("\n1. Addition");
 	printf("\n2. Subtraction");
 	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	int option;
	printf("\nEnter your choice: ");
	scanf("%d",&option);
	
	if(option==1){
		printf("\nAddition of %d and %d is %d",num1,num2,num1+num2);
	}
	else if(option==2){
		printf("\nSubtraction of %d and %d is %d",num1,num2,num1-num2);
	}
	else if(option==3){
		printf("\nMultiplication of %d and %d is %d",num1,num2,num1*num2);
	}
	else if(option==4){
		printf("\nDivision of %d and %d is %d",num1,num2,num1/num2);
	}
	else{
		printf("\nIn-Valid Choice");
	}
	
	char retry;
	printf("\n\n Do you want to see the MENU again[Y/n]: ");
	scanf("%c",&retry);
	scanf("%c",&retry);
	
	if(retry=='y' || retry == 'Y'){
		goto xyz;
	}
	
	printf("\n\nDo you want to continue[Y/n]: ");
	scanf("%c",&choice);
	scanf("%c",&choice);	
	}
	
 	while(choice=='Y'||choice=='y');
 }
 

