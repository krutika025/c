#include<stdio.h>
#include<math.h>
int main(){
	
	float y;
	float x;
	float result;
	
	printf("enter the value of y:");
	scanf("%f",&y);
	
	printf("\n enter the value of x:");
	scanf("%f",&x);
	
	result=cos(32)+log(x)+x*x+y*y+2*x*y;
	
    printf("\n value of the equation is:%.2f",result);
}
