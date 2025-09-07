// exchange first and last character
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp;
	int len;
	
	printf("Enter The String:");
	gets(str);
	
	len = strlen(str);
	temp =str[0];
	str[0]=str[len-1];
	str[len-1]=temp;
	
	printf("Modifide S tring: %s\n",str);
	return 0;
	
}