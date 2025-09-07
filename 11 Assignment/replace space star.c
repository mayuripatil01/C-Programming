//Replace space with *
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	
	printf("Enter THe string:");
	gets(str);
	
	for(i=0; str[i]!='\0';i++)
	{
		if(str[i]==' ')
		str[i] = '*';
		
	}
	printf("Modifide string: %s\n",str);
	return 0;
	
	
}