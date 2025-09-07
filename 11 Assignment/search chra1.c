// search character in string
# include<stdio.h>
#include<string.h>

int main()
{
char str[100],ch;
int i,found =0;

printf("Enter The String:");
gets(str);
printf("Enter The Character  TO Search:");
scanf("%c",&ch);

for (i=0;str[i] !='\0'; i++)
{
	if(str[i]==ch)
	{
		printf("Character %c found at position %d\n",ch,i);
		found =1;
		
		
	}
}
if(!found)
{
	printf("Character not found \n");
}
return 0;
	
}