#include<stdio.h>
#include<math.h>
int main(){
	int b,p,res=1;
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("enter p:");
	scanf("%d",&p);
	
	while(p>=1){
		res *= b;
		p--;
	}
	
	printf("result is: %d",res);
	
	
	
}


