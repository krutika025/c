#include<stdio.h>
int main(){
	
	int per;
	
	printf("enter your percentage:");
	scanf("%d",&per);
	
	if(per<=100 && per>=90){
		printf("A+ Grade");
	}
	else if(per<90 && per>=80){
		printf("b+ grade");
	}	
	else if (per<80 && per>=70){
		printf("c+ grade");
	}
	else if(per<70 && per>=60){
		printf("d grade");
	}
	else if(per<60 && per>=50){
		printf("e+ grade");
	}
	else if(per<50 && per>=35){
		printf("e grade");
	}
	else if(per>100 || per<=0){
		printf("\nIn-valid Percenatge");
	}
	else{
		printf("fail");
	}
}



