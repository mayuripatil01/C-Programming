//Remove nth index charactrer

#include <stdio.h>
int main()
{
	char str [100];
	int n,i;
	
	printf("Enter A string:");
	gets(str);
	
	printf("Enter index to remove:");
	scanf("%d",&n);
	
	for(i=n;str[i]!='\0';i++)
	{
		str [i]=str[i+1];
		
	}
	printf("String after removal: %s\n",str);
	return 0;
}