#include<stdio.h>
int main(){


 int age;

printf("enter your age:");
scanf("%d",&age);

if(age>=18 && age>0){
	printf("candidate is eligible");
}
else if(age<18 && age>0){
    printf("your not elegible");
}
 else{
	printf("you have entered invalid age ");
}

}

