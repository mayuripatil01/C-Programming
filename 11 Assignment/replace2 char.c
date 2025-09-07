//Replace all occurance of 'a' with $
#include <stdio.h>
int main()
{
	char str[100];
	int i;
	
	printf(" Enter a String:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		str[i]= '$';
		
	}
	printf("Modified string : %s\n",str);
	return 0;
}