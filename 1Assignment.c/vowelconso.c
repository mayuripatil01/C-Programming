//chesk character is Vowel or Consonant
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter The Any Character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{ 
	printf("Character is vowel");
	
	}
	else
	{
		printf("Character is Consonant");
		
	}
	return 0;	
}