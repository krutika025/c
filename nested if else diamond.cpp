#include<stdio.h>
int main()
{
	int i,j,k;
	for( i=1;i<=9;i++)
	{
		for( j=1;j<=i;j++)
		
		{
			printf(" *");
		}
		printf("\n");
	}
		for(i=9;i>=1;i--)
	{
		for( j=1;j<=i;j++)
		
		{
			printf(" *");
		}
		printf("\n");
	}
	
}



/*#include <stdio.h>

int main() {
    int i, j, k;
    for(i = 1; i <= 9; i++) {
        
        for(k = 1; k<= 9 - i; k++) {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for(i = 9 - 1; i >= 1; i--) {
        
        for(k = 1; k <= 9 - i; k++) {
            printf(" ");
        }
        
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}*/

