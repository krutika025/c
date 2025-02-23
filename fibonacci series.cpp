#include<stdio.h>
int main(){
	int num = 6, n1=0, n2=1, temp =0;
	
	for(int i=0;i<num;i++)
	{
		printf("%d", n1);
		temp = n1 + n2;
		//printf("%d", temp);
		n1 = n2;
		n2 = temp;
	}
		
}
