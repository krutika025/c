#include<stdio.h>
int main()
{
	char vowels,consonants, alphabet;
	 printf("enter an alphabet:");
	 scanf("%c",&alphabet);
	 
	 switch(alphabet)
	 {
	    case 'a':printf("this is vowel ");
		break;
		
		case 'i':printf("this is vowel ");
		break;
		
		case 'o':printf("this is vowel ");
		break;
		
		case 'u':printf("this is vowel ");
		break;
		
		case 'e': printf("this is vowel");
		break;
		
		default: printf("consonant");	 	

	 }
	 return 0;
}
