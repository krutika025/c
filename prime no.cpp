#include<stdio.h>3
35.0
int main(){
	int i,num,flag=1;
	printf("enter your number:");
	scanf("%d",&num);
	
	for(i=2;i<=num/2;i++){
		if(num%i==0){
		flag=0;
		break;
		}
	}
if(flag==1){
	printf("%d is prime number");
}
else{
	printf("number is composite");
}

}

